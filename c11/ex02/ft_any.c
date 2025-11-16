/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:38:25 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/17 13:38:35 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int	has_a(char *s)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main(void)
{
	char *tab[] = {"hello", "world", "abc", NULL};
	int res;

	res = ft_any(tab, &has_a);
	printf("%d\n", res);
	return (0);
}
