/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:10:48 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/07 16:27:10 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0 || index == 1)
		return (index);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}


#include <stdio.h>
int main(void)
{
	for (int i = -1; i <= 10; i++)
		printf("ft_fibonacci(%d) = %d\n", i, ft_fibonacci(i));
	return 0;
}
