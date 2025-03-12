/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:21:03 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/11 18:53:20 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	long int	size;
	int			*arr;
	long int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
/*
#include <stdio.h>

int main(void)
{
	int min = 1;
	int max = 0;
	int	*arr = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("%d, ", arr[i]);
	}
	printf("%p", arr);
	free(arr);
}
*/
