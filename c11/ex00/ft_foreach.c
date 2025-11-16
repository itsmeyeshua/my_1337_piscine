/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:37:50 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/17 13:37:56 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

#include <stdio.h>
void	print_int(int n)
{
	printf("%d ", n);
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	length = 5;

	ft_foreach(tab, length, &print_int);
	printf("\n");
	return (0);
}
