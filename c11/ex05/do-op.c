/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:48:20 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/17 13:48:36 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sing;
	int	res;

	sing = 1;
	res = 0;
	i = 0;
	while (str[i] && (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			sing *= -1;
		}
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * sing);
}

void	ft_putnbr(int nb)
{
	char	c;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
	{
		c = n % 10 + '0';
		ft_putnbr(n / 10);
		write(1, &c, 1);
	}
	else
	{
		c = n + '0';
		write(1, &c, 1);
	}
}

void	printresult(int n1, int n2, char c)
{
	int	res;

	if (c == '/')
		res = n1 / n2;
	else if (c == '+')
		res = n1 + n2;
	else if (c == '-')
		res = n1 - n2;
	else if (c == '*')
		res = n1 * n2;
	else
		res = n1 % n2;
	ft_putnbr(res);
}

int	main(int argc, char **argv)
{
	int		n1;
	int		n2;
	char	c;

	if (argc != 4)
		return (0);
	n1 = ft_atoi(argv[1]);
	n2 = ft_atoi(argv[3]);
	c = argv[2][0];
	if (c != '/' && c != '-' && c != '+' && c != '*' && c != '%')
		write(1, "0", 1);
	else if (n2 == 0 && c == '/')
		write(1, "Stop : division by zero", 23);
	else if (n2 == 0 && c == '%')
		write(1, "Stop : modulo by zero", 21);
	else
		printresult(n1, n2, c);
	write(1, "\n", 1);
	return (0);
}
