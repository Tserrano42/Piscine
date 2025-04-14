/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 23:58:46 by tserrano          #+#    #+#             */
/*   Updated: 2025/04/15 00:35:42 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_add_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + ' ';
		i++;
	}
	return (str);
}

int	ft_str_is_alpha(char c)
{
	if (!(c >= 'a' && c <= 'z')
		&& !(c >= 'A' && c <= 'Z'))
		return (0);
	return (1);
}

int	ft_str_is_numeric(char c)
{
	if (!(c >= '1' && c <= '9'))
		return (0);
	return (1);
}

int	ft_is_alpha_num(char c)
{
	if (ft_str_is_alpha(c) || ft_str_is_numeric(c))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_add_lowercase(str);
	if (ft_str_is_alpha(str[0]))
		str[0] -= 32;
	while (str[i])
	{
		if (!ft_is_alpha_num(str[i - 1]) && ft_str_is_alpha(str[i]))
			str[i] -= 32;
		i++;
	}
	return (str);
}
