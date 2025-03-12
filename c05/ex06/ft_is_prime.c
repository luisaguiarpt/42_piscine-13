/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:38:37 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/08 16:49:53 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (0);
	while (++i < nb)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}
/*
#include <stdio.h>

int main(void)
{
	int i = 100;
	while (i-- > 0)
		if (ft_is_prime(i))
			printf("is_prime(%i) = %i\n", i, ft_is_prime(i));
}
*/
