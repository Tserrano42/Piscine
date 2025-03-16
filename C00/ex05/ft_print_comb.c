/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 22:44:51 by tserrano          #+#    #+#             */
/*   Updated: 2025/03/16 21:03:58 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char first, char second, char third)
{
	write(1, &first, 1);
	write(1, &second, 1);
	write(1, &third, 1);
	if (first < '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '1';
	third = '2';
	while (first < '8')
	{
		while (second < '9')
		{
			while (third <= '9')
			{
				ft_print(first, second, third);
				third++;
			}
			second++;
			third = second + 1;
		}
		first++;
		second = first + 1;
		third = second + 1;
	}
	write(1, "\n", 1);
}
