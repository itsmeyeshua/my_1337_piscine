/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 20:25:02 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/28 20:36:32 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	size--;
	while (size > i)
	{
		tmp = tab[size];
		tab[size] = tab[i];
		tab[i] = tmp;
		size--;
		i++;
	}
}

#include <stdio.h>
int main()
{
	int arr_num[10] = {0,1,2,3,4,5,6,7,8,9};

	printf("array numbers before reverse int tab: [");
	for (int i = 0; i < 10; i++) {
		if (i != 9)
			printf("%d ", arr_num[i]);
		else
			printf("%d]\n", arr_num[i]);
	}

	ft_rev_int_tab(arr_num, 10);
	printf("array numbers after reverse int tab : [");
	for (int i = 0; i < 10; i++) {
		if (i != 9)
			printf("%d ", arr_num[i]);
		else
			printf("%d]\n", arr_num[i]);
	}
	return 0;
}
