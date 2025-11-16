/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:07:49 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/02 09:37:26 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	char			result[3];
	int				i;
	unsigned char	c;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		c = (unsigned char)str[i];
		if (c < 32 || c >= 127)
		{
			result[0] = hex[c / 16];
			result[1] = hex[c % 16];
			result[2] = '\0';
			write(1, "\\", 1);
			write(1, result, 2);
		}
		else
			write(1, &c, 1);
		i++;
	}
}

int main(void)
{
	char str[] = "Hello\x01\x02World\n";
	ft_putstr_non_printable(str);
	return 0;
}