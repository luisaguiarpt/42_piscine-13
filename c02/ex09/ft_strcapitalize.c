/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 22:02:08 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/04 18:21:38 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	to_lower(char *str);
int		is_alpha_num(char a);
int		is_alpha(char a);

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	to_lower(str);
	if (is_alpha(str[0]))
	{
		str[0] = str[0] - 32;
		i++;
	}
	while (str[i])
	{
		if (!is_alpha_num(str[i - 1]) && is_alpha(str[i]))
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}

void	to_lower(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

int	is_alpha(char a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	return (0);
}

int	is_alpha_num(char a)
{
	if (a >= '0' && a <= '9')
		return (1);
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
//	char str[61]="salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str[61]="Salut, CommEnt Tu vas ? 42Vots quarAnte-deux; cinquanTe+et+un";

	printf("%s\n", str);
	ft_strcapitalize(str);
	printf("%s", str);
}
*/
