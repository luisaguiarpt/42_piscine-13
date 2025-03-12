/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 21:15:36 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/11 13:37:55 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
void	ft_strcat(char *dest, char *src);
char	*is_null(void);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;
	int		totlen;

	totlen = 0;
	i = -1;
	if (size < 1)
		return (is_null());
	while (++i < size)
		totlen += ft_strlen(strs[i]);
	totlen += (size - 1) * ft_strlen(sep);
	i = 0;
	str = malloc((totlen + 1) * sizeof(char));
	*str = 0;
	if (!str)
		return (str);
	ft_strcat(str, strs[0]);
	while (++i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
	}
	ft_strcat(str, "\0");
	return (str);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

void	ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}

char	*is_null(void)
{
	char	*str;

	str = malloc(sizeof(char));
	*str = '\0';
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"Hey", "pretty!", "Plis", "cat", "me"};
	char	*sep = " ;) ";
	char	*joined;

	joined = ft_strjoin(2, strs, sep);	
	printf("%s", joined);
	free(joined);
}
*/
