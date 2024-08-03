/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:05:26 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/10 17:11:00 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	num_len(int nbr, int base_to_len)
{
	int	i;

	i = 0;
	if (nbr == 0)
		return (1);
	while (nbr)
	{
		nbr /= base_to_len;
		i++;
	}
	return (i);
}

int	space_handler_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 9 && str[i] <= 13) || str[i] == ' '
			|| str[i] == '+' || str[i] == '-')
			return (0);
		i++;
	}
	return (1);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (str_len(base) < 2 || space_handler_sign(base) == 0)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	num_in_base(char c, char *base_from)
{
	int	i;

	i = 0;
	while (base_from[i])
	{
		if (base_from[i] == c)
			return (1);
		i++;
	}
	return (0);
}
