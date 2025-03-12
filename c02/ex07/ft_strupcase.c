/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:52:49 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/03 13:11:02 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	str[15] = "Hell123o wolrd";
	printf("%s", ft_strupcase(str));
	return (0);
}
*/
