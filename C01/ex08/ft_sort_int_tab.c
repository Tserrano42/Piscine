/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 18:49:23 by tserrano          #+#    #+#             */
/*   Updated: 2025/04/13 19:06:15 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_swith(int *tab, int index)
{
	int	save;

	save = tab[index];
	tab[index] = tab[index + 1];
	tab[index + 1] = save;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (index < size)
	{
		while (index2 + 1 < size)
		{
			if (tab[index2] > tab[index2 + 1])
			{
				ft_swith(tab, index2);
			}
			index2++;
		}
		index2 = 0;
		index++;
	}
}
