/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:15:46 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/07 19:22:28 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while ((i * i) <= nb)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>
int main(void)
{
	int numbers[] = {-1, 0, 1, 2, 3, 4, 5, 16, 17};
	for (int i = 0; i < 9; i++)
		printf("ft_is_prime(%d) = %d\n", numbers[i], ft_is_prime(numbers[i]));
	return 0;
}
