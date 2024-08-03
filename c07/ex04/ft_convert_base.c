/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:29:14 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/13 10:37:19 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str);
int	num_len(int nbr, int base_to_len);
int	space_handler_sign(char *str);
int	check_base(char *base);
int	num_in_base(char c, char *base_from);

int	index_base(char c, char *base_from, int len_base)
{
	int	i;

	i = 0;
	while (i < len_base)
	{
		if (c == base_from[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str, char *base_from)
{
	int	result;
	int	sign;
	int	i;
	int	len_base;

	result = 0;
	sign = 1;
	i = 0;
	len_base = str_len(base_from);
	if (str[i] == '-')
		sign = -1;
	while (str[i])
	{
		result = result * len_base + index_base(str[i], base_from, len_base);
		i++;
	}
	return (result * sign);
}

char	*check_num(char *str, char *base_from)
{
	char	*result;
	int		i;
	int		j;
	int		sign;

	result = (char *)malloc(sizeof(char) * 33);
	i = 0;
	sign = 1;
	j = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	if (sign == -1)
		result[j++] = '-';
	while (str[i] && num_in_base(str[i], base_from) == 1)
		result[j++] = str[i++];
	result[j] = '\0';
	return (result);
}

char	*num_to_base(int nbr, char *base_to)
{
	int			size;
	char		*result;
	long long	num;
	int			sign;

	sign = 0;
	num = nbr;
	if (num < 0)
	{
		num = -num;
		sign = 1;
	}
	size = num_len(nbr, str_len(base_to)) + sign;
	result = (char *)malloc(sizeof(char) * (size + 1));
	result[size] = '\0';
	if (num == 0)
		result[--size] = base_to[0];
	while (num)
	{
		result[--size] = base_to[num % str_len(base_to)];
		num /= str_len(base_to);
	}
	if (sign == 1)
		result[0] = '-';
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	char	*result;
	int		num;

	if (check_base(base_from) == 0 || check_base(base_to) == 0)
		return (NULL);
	num = ft_atoi(check_num(nbr, base_from), base_from);
	result = num_to_base(num, base_to);
	return (result);
}

//#include <stdio.h>
//int	main(int ac, char **av)
//{
//	(void) ac;
// 	char *str = ft_convert_base(av[1], av[2], av[3]);
// 	printf("%s\n", str);
// 	return 0;
//}
