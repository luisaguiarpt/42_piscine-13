/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:33:10 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/09 22:39:26 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_itoa(long int nbr, char *base, char *str)
{
	int			size;

	size = 0;
	while (base[size])
		size++;
	if (nbr < 0)
	{
		nbr *= -1;
		*str= '-';
	}
	if (nbr / size == 0)
	{
		str++;
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

#include <stdio.h>

int	main(void)
{
	long int nbr = -42;
	char base[10] = "01";
	char str[20] = "";

	printf("%p\n", &str);
	ft_itoa(nbr, base, str);
	printf("%li in base \"%s\" = %s\n", nbr, base, str);
	printf("%p\n", &str);
}
