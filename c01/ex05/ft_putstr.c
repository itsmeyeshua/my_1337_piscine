/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 14:51:23 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/27 15:47:43 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*final_c;
	int		size;

	final_c = str;
	size = 0;
	while (*final_c++)
		size++;
	write(1, str, size);
}
