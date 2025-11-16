/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:31:32 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/01 11:15:18 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 'a' - 'A';
	while (str[i])
	{
		if (!(
				(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9')
			))
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= ('a' - 'A');
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac < 2) {
		fprintf(stderr, "Ex: ./ft_strcapitalize string1 string2");
		return 1;
	}
	for (int i = 1; av[i]; i++)
		printf("%s\n", ft_strcapitalize(av[i]));
	return 0;
}
