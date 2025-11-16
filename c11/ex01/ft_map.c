/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:38:07 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/17 13:38:14 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	i = 0;
	res = (int *)malloc(sizeof(int) * length);
	if (res == NULL)
		return (NULL);
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}


#include <stdio.h>
int	square(int n)
{
	return (n * n);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length = 5;
	int	i;
	int	*res;

	res = ft_map(tab, length, &square);
	if (!res)
		return (1);
	for (i = 0; i < length; i++)
		printf("%d ", res[i]);
	printf("\n");
	free(res);
	return (0);
}
