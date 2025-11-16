/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 17:51:43 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/07 19:21:19 by zguellou         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}


#include <stdio.h>
int main(void)
{
	int numbers[] = {-1, 0, 1, 2, 3, 14, 17, 20};
	for (int i = 0; i < 8; i++)
		printf("ft_find_next_prime(%d) = %d\n", numbers[i], ft_find_next_prime(numbers[i]));
	return 0;
}
