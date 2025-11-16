/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:11:32 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/03 08:52:45 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	i;
	int	counter;

	size = 0;
	if (to_find[size])
		while (to_find[size])
			size++;
	else
		return (str);
	i = 0;
	while (str[i])
	{
		counter = 0;
		while (str[i + counter] == to_find[counter] && str[i + counter])
		{
			counter++;
			if (size == counter)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac != 3) {
		fprintf(stderr, "Ex: ./ft_strstr \"Once you're 1337, you can't go back\" 13");
		return 1;
	}

	char *res = ft_strstr(av[1], av[2]);
	if (res)
		printf("\"%s\" is in \"%s\"\n", av[2], av[1]);
	else {
		printf("\"%s\" is not in \"%s\"\n", av[2], av[1]);
		return 1;
	}


	return 0;
}