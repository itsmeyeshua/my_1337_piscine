/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:53:26 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/07 15:39:36 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}


#include <stdio.h>
int main(void)
{
	printf("2^0 = %d\n", ft_recursive_power(2, 0));
	printf("2^3 = %d\n", ft_recursive_power(2, 3));
	printf("5^4 = %d\n", ft_recursive_power(5, 4));
	printf("2^-2 = %d\n", ft_recursive_power(2, -2));
	return 0;
}
