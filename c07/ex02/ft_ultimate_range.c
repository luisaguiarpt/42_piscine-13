/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 17:50:31 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/11 18:52:49 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;
	int	*arr;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (-1);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (size);
}
/*
#include <stdio.h>

int	main(void)
{
	int min = -14;
	int	max = 14;
	int	*range = NULL;

	ft_ultimate_range(&range, min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("%i, ", range[i]);
	}
	free(range);
}
*/
