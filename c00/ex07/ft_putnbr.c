/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:31:35 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/26 18:06:46 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	unsigned int	n;
	char			arr_nums[10];
	int				i;

	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		n = -nb;
		write(1, "-", 1);
	}
	else
		n = nb;
	i = 0;
	while (n)
	{
		arr_nums[i++] = (n % 10) + '0';
		n /= 10;
	}
	while (i > 0)
		write(1, &arr_nums[--i], 1);
}
