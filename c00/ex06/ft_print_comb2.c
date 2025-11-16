/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 14:32:24 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/29 09:39:17 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nums(int num)
{
	char	array_nums[2];

	array_nums[0] = (num / 10) + '0';
	array_nums[1] = (num % 10) + '0';
	write(1, array_nums, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_nums(a);
			write(1, " ", 1);
			ft_print_nums(b);
			if (a < 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}

int main()
{
	ft_print_comb2();
	return 0;
}
