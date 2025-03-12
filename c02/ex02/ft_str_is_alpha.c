/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 20:57:55 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/03 13:04:06 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is;

	is = 1;
	if (*str == '\0')
		return (is);
	while (*str)
	{
		if ((*str >= 'A' && *str <= 'Z') || (*str >= 'a' && *str <= 'z'))
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

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char *str_alpha = "askjfaasdasdanjvjvamk";
	char *str_num = "asd7asdknjanjk83";

	ft_str_is_alpha(str_alpha);
	ft_str_is_alpha(str_num);
	printf("alpha: %i\n",	ft_str_is_alpha(str_alpha));
	printf("num: %i\n",	ft_str_is_alpha(str_num));
}
*/
