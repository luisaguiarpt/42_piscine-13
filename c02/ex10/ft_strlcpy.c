/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 13:13:58 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/04 19:00:33 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	int				src_len;

	i = 0;
	src_len = 0;
	while (src[i])
	{
		src_len++;
		i++;
	}
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char src[] = "Hello, world!";
	char dst[10];
	unsigned int size = 10;

	printf("Source: %s\n", src);
	ft_strlcpy(dst, src, size);
	printf("Destin: %s\n", dst);
	printf("%i", ft_strlcpy(dst, src, size));
}
*/
