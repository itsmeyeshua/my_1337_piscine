/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:04:22 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/29 11:08:49 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (str[i] == '\0')
		return (1);
	else
		return (0);
}

#include <stdio.h>
int main(void)
{
	printf("\"12345\" is numeric? %d\n", ft_str_is_numeric("12345"));
	printf("\"12a45\" is numeric? %d\n", ft_str_is_numeric("12a45"));
	return 0;
}