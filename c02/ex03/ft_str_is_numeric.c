/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:57:55 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/04 11:05:32 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is;

	is = 1;
	if (*str == '\0')
		return (is);
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			is = 1;
		else
		{
			is = 0;
			return (is);
		}
		str += 1;
	}
	return (is);
}
/*
#include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *str_alpha = "";
	char *str_num = "8981779139329837813";

	ft_str_is_numeric(str_alpha);
	ft_str_is_numeric(str_num);
	printf("alpha: %i\n",	ft_str_is_numeric(str_alpha));
	printf("num: %i\n",	ft_str_is_numeric(str_num));
}
*/
