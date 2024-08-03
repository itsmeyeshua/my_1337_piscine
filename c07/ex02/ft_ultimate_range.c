/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:26:10 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/09 09:42:22 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
//#include <stdio.h>
//int main(void)
//{
//	int	min = 5;
//	int	max = 10;
//	int	*tab;
//	int **range = &tab;
//	int	size;
//	int	i = 0;
//	size = ft_ultimate_range(range, min, max);
//	while(i < size)
//	{
//		printf("%d, ", tab[i]);
//		i++;
//	}
//}
