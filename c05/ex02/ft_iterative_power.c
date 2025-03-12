/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:18:44 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/08 16:43:52 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	b;

	b = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 1)
		nb *= b;
	return (nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 3;
	int p = 9;

	while (p-- > -2)
		printf("%i ** %i = %i\n", n, p, ft_iterative_power(n, p));
}
*/
