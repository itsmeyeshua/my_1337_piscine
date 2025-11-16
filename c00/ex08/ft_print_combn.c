/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 16:38:11 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/27 09:43:21 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_array(char arr[], int size, int last)
{
	if (arr[0] == last)
	{
		write(1, arr, size);
		return ;
	}
	write(1, arr, size);
	write(1, ", ", 2);
}

void	ft_print_combn(int n)
{
	char		arr[10];
	char		arr_max[10];
	int			index;
	char		placeholder;
	int			i;

	i = 0;
	while (i < n)
	{
		arr[i] = i + '0';
		arr_max[i] = (10 - n) + i + '0';
		i++;
	}
	print_array(arr, n, arr_max[0]);
	while (arr[0] != arr_max[0])
	{
		index = n - 1;
		while (arr[index] == arr_max[index])
			--index;
		placeholder = ++(arr[index]);
		while (index < n - 1)
			arr[++index] = ++placeholder;
		print_array(arr, n, arr_max[0]);
	}
}

int main()
{
	ft_print_combn(2);
	return 0;
}