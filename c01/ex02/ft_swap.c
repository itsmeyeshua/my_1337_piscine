/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:38:11 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/27 13:44:11 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int a = 13;
	int b = 37;

	printf("Before ft_swap() :\nab = %d%d\n\n", a, b);

	ft_swap(&a, &b);
	printf("After ft_swap() :\nab = %d%d", a, b);
}
