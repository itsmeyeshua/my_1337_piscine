/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 15:51:12 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/07 19:22:17 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb == 0 || nb == 1)
		return (nb);
	i = 2;
	while ((i * i) <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(void)
{
	int numbers[] = {0, 1, 2, 4, 9, 10, 16, 20};
	for (int i = 0; i < 8; i++)
		printf("ft_sqrt(%d) = %d\n", numbers[i], ft_sqrt(numbers[i]));
	return 0;
}
