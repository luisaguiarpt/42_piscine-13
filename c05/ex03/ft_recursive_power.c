/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 12:30:50 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/08 16:44:46 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (ft_recursive_power(nb, power - 1) * nb);
}
/*
#include <stdio.h>

int	main(void)
{
	int n = 9;
	int p = 9;

	while (p-- > -3)
		printf("%i ** %i = %i\n", n, p, ft_recursive_power(n, p));
}
*/
