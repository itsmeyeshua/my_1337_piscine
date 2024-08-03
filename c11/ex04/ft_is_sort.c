/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:39:04 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/17 13:47:22 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	istri;

	i = 0;
	istri = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
		{
			istri = 0;
			break ;
		}
		i++;
	}
	i = 0;
	while (i < length - 1 && !istri)
	{
		if (f(tab[i], tab[i + 1]) < 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
