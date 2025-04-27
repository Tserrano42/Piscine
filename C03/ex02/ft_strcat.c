/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:36:48 by tserrano          #+#    #+#             */
/*   Updated: 2025/04/27 19:54:13 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (dest[index] != '\0')
		index++;
	while (src[index2] != '\0')
	{
		dest[index] = src[index2];
		index2++;
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
