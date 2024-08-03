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
