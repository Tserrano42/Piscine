/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 20:36:10 by tserrano          #+#    #+#             */
/*   Updated: 2025/03/30 20:53:06 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	save;
	int	index;

	save = 0;
	index = 0;
	size = size - 1;
	while (index < size)
	{
		save = tab[size];
		tab[size] = tab[index];
		tab[index] = save;
		index++;
		size--;
	}
}
