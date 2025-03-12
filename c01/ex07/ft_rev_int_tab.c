/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldias-da <ldias-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 12:47:33 by ldias-da          #+#    #+#             */
/*   Updated: 2025/03/02 18:33:44 by ldias-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	ct;
	int	temp;

	ct = 0;
	while (ct < size / 2)
	{
		temp = tab[ct];
		tab[ct] = tab[size - ct - 1];
		tab[size - ct - 1] = temp;
		ct++;
	}
}
