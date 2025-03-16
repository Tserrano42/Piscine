/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 21:06:21 by tserrano          #+#    #+#             */
/*   Updated: 2025/03/16 21:51:06 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	nomber1;
	int	nomber2;

	nomber1 = 0;
	nomber2 = 1;
	while (nomber1 < 99)
	{
		while (nomber2 < 100)
		{
			ft_print((nomber1 / 10) + '0');
			ft_print((nomber1 % 10) + '0');
			write(1, " ", 1);
			ft_print((nomber2 / 10) + '0');
			ft_print((nomber2 % 10) + '0');
			if (nomber1 < 98)
			{
				write(1, ", ", 2);
			}
			nomber2++;
		}
		nomber1++;
		nomber2 = nomber1 + 1;
	}
	write(1, "\n", 2);
}
