/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:20:04 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/08 16:49:20 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = -1;
	while (++i <= nb)
	{
		if ((i * i) == nb)
			return (i);
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	int i = 599;

	while (i-- > -4)
		if (ft_sqrt(i))
			printf("sqrt(%i) = %i\n", i, ft_sqrt(i));
}
*/
