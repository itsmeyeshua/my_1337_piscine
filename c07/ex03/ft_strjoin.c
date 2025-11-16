/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 21:00:31 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/09 14:44:30 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len_s(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	strs_size_plus_sep(char **strs, int size, int sep_size)
{
	int	i;
	int	s_size;

	i = 0;
	s_size = 0;
	while (i < size)
	{
		s_size += len_s(strs[i]) + sep_size;
		i++;
	}
	s_size -= sep_size;
	return (s_size);
}

void	populate_st(char *result, char **strs, char *sep, int size)
{
	int		s;
	int		c;
	int		len;
	int		s_size;
	int		sep_size;

	s = 0;
	len = 0;
	sep_size = len_s(sep);
	s_size = strs_size_plus_sep(strs, size, sep_size);
	while (len < s_size)
	{
		c = 0;
		while (strs[s][c])
			result[len++] = strs[s][c++];
		if (s < (size - 1))
		{
			c = 0;
			while (sep[c])
				result[len++] = sep[c++];
		}
		s++;
	}
	result[len] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		s_size;
	int		sep_size;

	if (size <= 0)
	{
		result = (char *)malloc(1);
		if (result)
			*result = '\0';
		return (result);
	}
	s_size = 0;
	sep_size = len_s(sep);
	s_size = strs_size_plus_sep(strs, size, sep_size);
	result = (char *)malloc(sizeof(char) * (s_size + 1));
	if (!result)
		return (NULL);
	populate_st(result, strs, sep, size);
	return (result);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac < 3)
	{
		fprintf(stderr, "Ex: ./ft_strjoin life is good \" - \"");
		return 1;
	}
    char *sep = av[ac - 1];
	av[ac - 1] = NULL;
    char **strs = &av[1];
    char *result = ft_strjoin(ac - 2, strs, sep);

    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}
