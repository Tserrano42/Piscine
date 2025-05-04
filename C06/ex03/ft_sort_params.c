/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 19:54:19 by tserrano          #+#    #+#             */
/*   Updated: 2025/05/04 19:31:44 by tserrano         ###   ########.fr       */
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

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0' && s1[index] == s2[index])
		index++;
	return (s1[index] - s2[index]);
}

void	ft_print(char **argv)
{
	int	index;

	index = 0;
	while (argv[++index])
	{
		ft_putstr(argv[index]);
		ft_putstr("\n");
	}
}

int	main(int argc, char **argv)
{
	int		index;
	int		loop_count;
	char	*save;

	index = 1;
	loop_count = 0;
	while (loop_count < argc)
	{
		while (argv[index + 1])
		{
			if (ft_strcmp(argv[index], argv[index + 1]) > 0)
			{
				save = argv[index];
				argv[index] = argv[index + 1];
				argv[index + 1] = save;
			}
			index++;
		}
		index = 1;
		loop_count++;
	}
	ft_print(argv);
}
