/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 19:03:13 by tserrano          #+#    #+#             */
/*   Updated: 2025/05/17 19:02:59 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	index;
	int	save_min;
	int	*my_variable;

	index = -1;
	save_min = min - 1;
	my_variable = malloc(sizeof(int) * (max - min));
	if (!my_variable)
		return (NULL);
	if (min < max)
	{
		while (++save_min < max)
			my_variable[++index] = save_min;
	}
	else
		return (NULL);
	return (my_variable);
}
