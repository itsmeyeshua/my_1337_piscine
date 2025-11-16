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

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac < 2) {
		fprintf(stderr, "Ex: ./ft_putstr s1 s2 s3\n");
		return 1;
	}

	for (int i = 1; av[i]; i++) {
		ft_putstr(av[i]);
		write(1, "\n", 1);
	}

	return 0;
}
