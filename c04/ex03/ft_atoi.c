/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:10:10 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/06 10:45:24 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	space_handler(char c)
{
	if ((c >= 9 && c <= 13) || c == ' ')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	long long	num;
	int			i;
	int			sign;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] && space_handler(str[i]) == 0)
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return (num * sign);
}
