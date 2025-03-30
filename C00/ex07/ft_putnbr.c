/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 21:52:22 by tserrano          #+#    #+#             */
/*   Updated: 2025/03/30 18:14:59 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		ft_putchar('0');
		return ;
	}
}

void	ft_putnbr(int nb)
{
	char	save_array[10];
	int		index;

	index = 0;
	ft_check(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	while (nb > 0)
	{
		save_array[index] = (nb % 10) + '0';
		nb = nb / 10;
		index++;
	}
	index = index - 1;
	while (index >= 0)
	{
		ft_putchar(save_array[index]);
		index--;
	}
}
