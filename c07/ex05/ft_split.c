/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 18:45:01 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/11 19:38:58 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char *str, char *sep);
int		is_sep(char c, char *sep);
char	*ft_strdup(char *str, char *sep);
int		ft_strlen(char *str);

char	**ft_split(char *str, char *charset)
{
	char	**str_arr;
	int		i;
	int		j;

	i = 0;
	str_arr = malloc(((j = count_words(str, charset)) + 1) * sizeof(char *));
	if (!str_arr)
		return (NULL);
	while (!is_sep(*str, charset))
		str++;
	while (*str)
	{
		if (is_sep(*str, charset))
			str++;
		else if (i < j)
		{
			str_arr[i] = ft_strdup(str, charset);
			str += ft_strlen(str_arr[i]);
			i++;
		}
		else
			str++;
	}
	str_arr[i] = NULL;
	return (str_arr);
}

char	*ft_strdup(char *str, char *sep)
{
	int		i;
	char	*dup;
	int		loc;

	i = 0;
	loc = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		loc++;
		i++;
	}
	dup = malloc((loc + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (str[i] && !is_sep(str[i], sep))
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}

int	count_words(char *str, char *sep)
{
	int	i;
	int	ct;

	i = 0;
	ct = 0;
	if (!*str)
		return (0);
	while (str[i])
	{
		if (is_sep(str[i], sep) && !is_sep(str[i + 1], sep) && str[i + 1])
			ct++;
		i++;
	}
	if (!is_sep(str[i - 1], sep))
		ct--;
	return (ct);
}

int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Ola, o,rato;roeu . a.rolha;do...rei;;;.,;da.russia.";
	char	charset[4] = ",.;";
	char	**str_array;
	
	str_array = ft_split(str, charset);
	int i = 0;
	while (str_array[i])
	{
		printf("%s\n", str_array[i]);
		i++;
	}
	printf("%s\n", str_array[i]);
	free(str_array);
}
*/
