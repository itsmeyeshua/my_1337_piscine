/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 18:39:43 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/02 09:53:33 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_address(unsigned long str)
{
	int		i;
	char	*hex;
	char	c_adr[17];

	hex = "0123456789abcdef";
	i = 15;
	c_adr[16] = '\0';
	while (i >= 0)
	{
		c_adr[i] = hex[str % 16];
		str /= 16;
		i--;
	}
	write(1, c_adr, 16);
	write(1, ": ", 2);
}

void	print_size(char *str, int size)
{
	char			*hex;
	char			result[2];
	int				i;
	unsigned char	c;

	i = 0;
	hex = "0123456789abcdef";
	while (i < 16 && i < size && str[i])
	{
		c = str[i];
		result[0] = hex[c / 16];
		result[1] = hex[c % 16];
		write(1, result, 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
	while (i < 16)
	{
		write(1, "  ", 2);
		if (i % 2 != 0)
			write(1, " ", 1);
		i++;
	}
}

void	print_line(char *str, int size)
{
	int	i;

	i = 0;
	while (i < 16 && i < size && str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
			write(1, ".", 1);
		else
			write(1, &str[i], 1);
		i++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	if (!(size && addr))
		return (addr);
	i = 0;
	while (i < size)
	{
		print_address((unsigned long)addr + i);
		print_size((char *)addr + i, size);
		print_line((char *)addr + i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
