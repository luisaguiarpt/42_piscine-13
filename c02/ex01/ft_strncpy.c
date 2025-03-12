/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:14:17 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/04 15:08:43 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{

	char	src2[8] = "Hello, ";
	char	dest2[14];
	unsigned int n2 = 9; 
	printf("|%s|", strncpy(dest2, src2, n2));
	printf("\n");

	char	src[8] = "Hello, ";
	char	dest[14];
	unsigned int n = 9;

	printf("|%s|",	ft_strncpy(dest, src, n));
	printf("\n");

	return (0);
}
*/
