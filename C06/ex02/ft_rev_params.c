/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:47:10 by tserrano          #+#    #+#             */
/*   Updated: 2025/05/01 19:53:34 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	write(1, str, index);
}

int	main(int argc, char **argv)
{
	int	index;

	index = argc - 1;
	while (index > 1)
	{
		ft_putstr(argv[index]);
		ft_putstr("\n");
		index--;
	}
}
