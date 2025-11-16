/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 20:03:20 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/05 20:04:30 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac != 2) {
		fprintf(stderr, "Ex: ./ft_strlen string\n");
		return 1;
	}

	printf("len of \"%s\" is %d\n", av[1], ft_strlen(av[1]));
	return 0;
}