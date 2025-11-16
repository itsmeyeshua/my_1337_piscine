/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:29:14 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/29 11:30:47 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac < 2) {
		fprintf(stderr, "Ex: ./ft_strlowcase string1 string2");
		return 1;
	}
	for (int i = 1; av[i]; i++)
		printf("%s\n", ft_strlowcase(av[i]));
	return 0;
}