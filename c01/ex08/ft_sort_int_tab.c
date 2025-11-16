/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:37:02 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/29 09:30:54 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (--size > 0)
	{
		i = 0;
		while (i < size)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab[i + 1];
				tab[i + 1] = tab[i];
				tab[i] = tmp;
			}
			i++;
		}
	}
}

#include <stdio.h>
int main()
{
	int arr_num[4] = {13,42,37,0};

	printf("array numbers before sorting: [");
	for (int i = 0; i < 4; i++) {
		if (i != 3)
			printf("%d ", arr_num[i]);
		else
			printf("%d]\n", arr_num[i]);
	}

	ft_sort_int_tab(arr_num, 4);
	printf("array numbers after sorting : [");
	for (int i = 0; i < 4; i++) {
		if (i != 3)
			printf("%d ", arr_num[i]);
		else
			printf("%d]\n", arr_num[i]);
	}
	return 0;
}
