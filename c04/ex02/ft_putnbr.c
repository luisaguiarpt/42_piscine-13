/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 01:31:28 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/06 17:34:11 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	itoa(int n);

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb < 10)
	{
		itoa(nb);
		return ;
	}
	else
	{
		ft_putnbr(nb / 10);
		itoa(nb % 10);
	}
}

void	itoa(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
}
/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(420);
	printf("\n");
	ft_putnbr(-489);
	printf("\n");
	ft_putnbr(-48654139);
	printf("\n");
	ft_putnbr(-123456789);
	printf("\n");
	ft_putnbr(123456789);
	printf("\n");
	ft_putnbr(-107654100);
	printf("\n");
	ft_putnbr(987654321);
	printf("\n");
}
*/
