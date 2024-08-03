/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 15:17:55 by oessoufi          #+#    #+#             */
/*   Updated: 2024/07/06 16:34:00 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	num_base(char c, char *base, int len_base)
{
	int	i;
	int	found;

	i = 0;
	found = 0;
	while (i < len_base)
	{
		if (base[i] == c)
		{
			found = 1;
			break ;
		}
		i++;
	}
	return (found);
}

int	base_index(char c, char *base, int len_base)
{
	int	i;

	i = 0;
	while (i < len_base)
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str, int len_str, char *base, int len_base)
{
	int	result;
	int	sign;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (i < len_str && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (i < len_str && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (i < len_str && num_base(str[i], base, len_base) == 1)
	{
		result = result * len_base + base_index(str[i], base, len_base);
		i++;
	}
	return (result * sign);
}

int	base_check(char *base, int len_base)
{
	int	i;
	int	j;

	i = 0;
	if (len_base < 2)
		return (0);
	while (i < len_base)
	{
		j = i + 1;
		while (j < len_base)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	len_base;
	int	num;
	int	len_str;

	num = 0;
	len_str = 0;
	while (str[len_str])
		len_str++;
	len_base = 0;
	while (base[len_base])
		len_base++;
	if (base_check(base, len_base) == 1)
		num = ft_atoi(str, len_str, base, len_base);
	return (num);
}
