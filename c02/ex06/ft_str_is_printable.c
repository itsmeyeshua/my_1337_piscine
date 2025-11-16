/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:15:09 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/29 11:19:28 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= ' ' && str[i] <= '~')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

#include <stdio.h>
int main(void)
{
	printf("\"Hello!\" is printable? %d\n", ft_str_is_printable("Hello!"));
	printf("\"Hello\x01\" is printable? %d \n", ft_str_is_printable("Hello\x01"));
	return 0;
}