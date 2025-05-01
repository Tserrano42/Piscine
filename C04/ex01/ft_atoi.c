/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:32:58 by tserrano          #+#    #+#             */
/*   Updated: 2025/05/01 18:50:42 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_white_space(char c)
{
	if (c == ' ' || c == '\f' || c == '\t'
		|| c == '\n' || c == '\r'
		|| c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	index;
	int	sign_count;
	int	result;

	index = 0;
	sign_count = 0;
	result = 0;
	while (ft_is_white_space(str[index]) && str[index])
		index++;
	while ((str[index] == '+' || str[index] == '-') && str[index])
	{
		if (str[index] == '-')
			sign_count++;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index])
	{
		result = result * 10 + (str[index] - '0');
		index++;
	}
	if (sign_count % 2 == 0)
		return (result);
	return (-result);
}
