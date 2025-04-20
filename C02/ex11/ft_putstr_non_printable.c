/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tserrano <tserrano@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 19:35:48 by tserrano          #+#    #+#             */
/*   Updated: 2025/04/20 20:51:38 by tserrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (!(c >= 32 && c <= 126))
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int				index;
	char			*hex;
	unsigned char	converted_char;

	index = 0;
	hex = "0123456789abcdef";
	while (str[index] != '\0')
	{
		if (ft_char_is_printable(str[index]) == 1)
		{
			ft_putchar(str[index]);
		}
		else
		{
			converted_char = (unsigned char)str[index];
			ft_putchar('\\');
			ft_putchar(hex[converted_char / 16]);
			ft_putchar(hex[converted_char % 16]);
		}
		index++;
	}
}
