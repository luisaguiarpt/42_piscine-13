/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 14:00:14 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/03 20:07:13 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_char_is_printable(char c);
void	atoh(char c);

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!ft_char_is_printable(str[i]))
		{
			atoh(str[i]);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	ft_char_is_printable(char c)
{
	if (c >= ' ' && c <= '~')
	{
		return (1);
	}
	return (0);
}

void	atoh(char c)
{
	char	*hex;
	int		div;
	int		mod;

	hex = "0123456789abcdef";
	div = c / 16;
	mod = c % 16;
	write(1, "\\", 1);
	write(1, &hex[div], 1);
	write(1, &hex[mod], 1);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*str = "Coucou\ntu vas bien ?";

//	printf("Before: %s\n", str);
//	printf("After : ");
	ft_putstr_non_printable(str);
}
*/
