/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:11:22 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/07 19:26:58 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	num;

	num = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	while (i < power)
	{
		nb = nb * num;
		i++;
	}
	return (nb);
}
