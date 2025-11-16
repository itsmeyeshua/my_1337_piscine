/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 15:48:30 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/27 16:07:47 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (*str++)
		size++;
	return (size);
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