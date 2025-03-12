/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 11:19:06 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/09 11:43:24 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb > 0)
	{
		f = f * nb;
		nb--;
	}
	return (f);
}

#include <stdio.h>

int	main(void)
{
	int	i;

	i = 13;
	while (i-- > -3)
		printf("%i! = %i\n", i, ft_iterative_factorial(i));
}

