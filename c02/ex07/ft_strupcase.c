/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:21:27 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/29 11:28:27 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac < 2) {
		fprintf(stderr, "Ex: ./ft_strupcase string1 string2");
		return 1;
	}
	for (int i = 1; av[i]; i++)
		printf("%s\n", ft_strupcase(av[i]));
	return 0;
}