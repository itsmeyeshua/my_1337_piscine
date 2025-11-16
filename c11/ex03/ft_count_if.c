/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:38:43 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/17 13:38:57 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			count++;
		i++;
	}
	return (count);
}


#include <stdio.h>

int	has_e(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] == 'e')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *tab[] = {"hello", "world", "1337", "42"};
	int length = 4;
	int res;
	int i;

	printf("Array contents:\n");
	for (i = 0; i < length; i++)
		printf("%d: %s\n", i, tab[i]);

	res = ft_count_if(tab, length, &has_e);

	printf("\nNumber of strings containing 'e': %d\n", res);
	printf("(In this array, 'hello', 'world', '1337', and '42' contain 'e')\n");

	return (0);
}
