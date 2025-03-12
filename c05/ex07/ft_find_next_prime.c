/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:23:57 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/08 14:34:08 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (i != ft_is_prime(i))
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

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

int	main(void)
{
	int i = 600;

	while (i-- > 0)
		printf("ft_find_next_prime(%i) = %i\n", i, ft_find_next_prime(i));
}
*/
