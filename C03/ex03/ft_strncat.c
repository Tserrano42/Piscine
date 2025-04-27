/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:55:59 by tserrano          #+#    #+#             */
/*   Updated: 2025/04/27 20:04:09 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (dest[index] != '\0')
		index++;
	while (src[index2] != '\0' && index2 < nb)
	{
		dest[index] = src[index2];
		index2++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
