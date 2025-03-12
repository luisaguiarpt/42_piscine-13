/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 16:43:44 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/11 21:47:43 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_atoi_base(char *str, char *base);
int		is_valid(char *base);
int		base_size(char *base);
char	*ft_itoa(long int nbr, char *base, char *str);

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb_dec;
	int		base_s;
	int		alloc_size;
	char	*nbr_to;

	if (!(is_valid(base_from) && is_valid(base_to)))
		return (NULL);
	nb_dec = ft_atoi_base(nbr, base_from);
	base_s = base_size(base_to);
	alloc_size = 0;
	if (nb_dec <= 0)
		alloc_size++;
	while (nb_dec != 0)
	{
		nb_dec /= base_s;
		alloc_size++;
	}
	nbr_to = malloc((alloc_size + 1) * sizeof(char));
	nb_dec = ft_atoi_base(nbr, base_from);
	ft_itoa((long int) nb_dec, base_to, nbr_to);
	return (nbr_to);
}

char	*ft_itoa(long int nbr, char *base, char *str)
{
	int			size;

	size = 0;
	while (base[size])
		size++;
	if (nbr < 0)
	{
		nbr *= -1;
		*str = '-';
		str++;
	}
	if (nbr / size == 0)
	{
		*str = base[nbr % size];
		return (str);
	}
	if (nbr > 0)
	{
		str = ft_itoa(nbr / size, base, str);
		str++;
		*str = base[nbr % size];
		str[1] = '\0';
	}
	return (str);
}

int	base_size(char *base)
{
	int	size;

	size = 0;
	while (*base)
	{
		size++;
		base++;
	}
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	char str[20] = "   -80000000";
	char base_from[17] = "0123456789ABCDEF";
	char base_to[17] = "01";
	char	*converted = ft_convert_base(str, base_from, base_to);

	printf("base_from: %s | string: %s\nbase_to: %s | nb: %s\n", 
		base_from, str, base_to, converted);
	free(converted);
}
*/
