/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:49:23 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/17 13:50:03 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_lentp(char **av)
{
	int	i;

	i = 0;
	while (av[i])
		i++;
	return (i);
}

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	size;

	size = str_lentp(tab);
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (str_cmp(tab[i], tab[j]) > 0)
			{
				swap(&tab[i], &tab[j]);
			}
			j++;
		}
		i++;
	}
}
