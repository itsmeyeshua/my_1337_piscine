/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:01:26 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/02 10:06:47 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac != 3) {
		fprintf(stderr, "Ex: ./ft_strcmp life good");
		return 1;
	}
	printf("ft_strcmp(\"%s\", \"%s\") = %d\n", av[1], av[2], ft_strcmp(av[1], av[2]));
	return 0;
}