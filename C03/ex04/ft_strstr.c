/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 23:44:24 by tserrano          #+#    #+#             */
/*   Updated: 2025/04/28 23:56:51 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (str[index])
	{
		if (str[index] == to_find[index2])
		{
			while (str[index2] && str[index + index2] == to_find[index2])
				index2++;
		}
		if (to_find[index2] == '\0')
			return (&str[index]);
		else
			index2 = 0;
		index++;
	}
	return (NULL);
}
