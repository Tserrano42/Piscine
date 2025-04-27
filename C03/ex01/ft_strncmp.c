/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:16:50 by tserrano          #+#    #+#             */
/*   Updated: 2025/04/27 19:35:26 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0'
		&& s1[index] == s2[index] && index < n)
		index++;
	if (index == n)
		return (0);
	return (s1[index] - s2[index]);
}
