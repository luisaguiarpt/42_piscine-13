/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 14:45:36 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/06 13:12:36 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isspace(char c);

int	ft_atoi(char *str)
{
	int	minus;
	int	n;

	minus = 0;
	n = 0;
	while (ft_isspace(*str))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			minus++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	if (minus % 2 == 1)
		return (-n);
	return (n);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	i;

	i = ft_atoi("\n\t\v\r\f --++----+-+123y56f7");
	printf("%i", i);
}
*/
