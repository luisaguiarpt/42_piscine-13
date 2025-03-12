/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 15:12:22 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/06 17:37:54 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_base(int nbr, char *base);
int		val_base(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int			size;
	long int	n;

	size = 0;
	n = (long int) nbr;
	if (val_base(base) == 0)
		return ;
	while (base[size])
		size++;
	if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n == 0)
	{
		return ;
	}
	if (n > 0)
	{
		ft_putnbr_base(n / size, base);
		print_base(n % size, base);
	}
}

int	val_base(char *str)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (str[len])
	{
		if (str[len] == '+' || str[len] == '-')
			return (0);
		len++;
	}
	while (i < len)
	{
		j = i + 1;
		while (j < len)
		{
			if (str[i] == str[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len > 1);
}

void	print_base(int nbr, char *base)
{
	write(1, &base[nbr], 1);
}
/*
#include <stdio.h>

int	main(void)
{
	int 	i = -2147483648;
//	char	*base = "abhj+sd";

	ft_putnbr_base(i, "poneyvif");
	printf("\n");
	ft_putnbr_base(i, "01");
	printf("\n");
	ft_putnbr_base(i, "0123456789ABCDEF");
	printf("\n");
	ft_putnbr_base(i, "");
	printf("\n");
	ft_putnbr_base(i, "1");
	printf("\n");
	ft_putnbr_base(i, "abcda");
	printf("\n");
	ft_putnbr_base(i, "+-");
	printf("\n");
	ft_putnbr_base(i, "=?");
	printf("\n");
	ft_putnbr_base(i, "0123456789");
	printf("\n");
}
*/
