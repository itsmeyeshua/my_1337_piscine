/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 16:54:54 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/08 13:55:14 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	print_array(char **arr)
{
	int	index;
	int	i;

	index = 1;
	while (arr[index])
	{
		i = 0;
		while (arr[index][i])
		{
			write(1, &arr[index][i], 1);
			i++;
		}
		write(1, "\n", 1);
		index++;
	}
}

int	main(int ac, char **av)
{
	if (ac < 2) {
		write(2, "Ex: ./ft_sort_params param1 param2\n", 37);
		return 1;
	}
	int		size;
	int		i;
	char	*tmp;

	if (ac > 1)
	{
		size = ac;
		while (size > 1)
		{
			i = 1;
			while (i < size - 1)
			{
				if (ft_strcmp(av[i], av[i + 1]) > 0)
				{
					tmp = av[i + 1];
					av[i + 1] = av[i];
					av[i] = tmp;
				}
				i++;
			}
			size--;
		}
		print_array(av);
	}
	return (0);
}
