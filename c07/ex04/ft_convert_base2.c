/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 20:53:35 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/11 21:36:43 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c);
int	ft_strlen(char *str);
int	is_match(char nee, char *hay);
int	is_valid(char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	dec;
	int	minus;

	i = 0;
	dec = 0;
	minus = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			minus = -1;
		i++;
	}
	while (str[i++])
	{
		if (is_match(str[i - 1], base) >= 0)
			dec = (dec * ft_strlen(base) + is_match(str[i - 1], base));
		else
			return (dec * minus);
	}
	return (dec * minus);
}

int	is_match(char nee, char *hay)
{
	int	i;

	i = 0;
	while (hay[i])
	{
		if (hay[i] == nee)
			return (i);
		i++;
	}
	return (-1);
}

int	is_valid(char *base)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		i = len + 1;
		while (base[i])
		{
			if (base[len] == base[i])
				return (0);
			i++;
		}
		len++;
	}
	return (1);
}

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "  -00410d";
	char *base = "012345";

	printf("%s base(%i) = %i", str, ft_strlen(base), ft_atoi_base(str, base));
}
*/
