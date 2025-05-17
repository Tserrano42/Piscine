/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 19:45:02 by tserrano          #+#    #+#             */
/*   Updated: 2025/05/17 19:00:45 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strdup(char *src)
{
	int		index;
	char	*copy;

	index = -1;
	copy = NULL;
	while (src[++index])
		;
	copy = malloc(sizeof(char) * (index + 1));
	if (!copy)
		return (NULL);
	index = -1;
	while (src[++index])
		copy[index] = src[index];
	copy[index] = '\0';
	return (copy);
}
