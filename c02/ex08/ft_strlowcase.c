/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 22:52:49 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/03 13:11:41 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += ('a' - 'A');
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

char	*ft_strlowcase(char *str);

int	main(void)
{
	char	str[14] = "Hello WORLrd\n";
	printf("%s", ft_strlowcase(str));
	return (0);
}
*/
