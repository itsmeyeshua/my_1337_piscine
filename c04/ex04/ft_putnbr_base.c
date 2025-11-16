/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 10:45:48 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/06 13:54:09 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	valid_base(char *str)
{
	int	i;
	int	size;
	int	j;

	i = 0;
	size = 0;
	while (str[size])
		size++;
	if (size < 2)
		return (0);
	while (str[i])
	{
		j = i + 1;
		if (str[i] == '+' || str[i] == '-')
			return (0);
		while (str[j])
		{
			if (str[j] == str[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	write_arr(char *arr, int end)
{
	while (end > 0)
		write (1, &arr[--end], 1);
}

long long	valid_num(int nbr, char *base)
{
	long long	num;

	if (nbr == 0)
	{
		write (1, &base[0], 1);
		return (0);
	}
	else if (nbr < 0)
	{
		num = -(long long)nbr;
		write(1, "-", 1);
		return (num);
	}
	else
	{
		num = nbr;
		return (num);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	long long	num;
	char		arr[35];
	int			base_len;

	if (valid_base(base) == 0)
		return ;
	base_len = 0;
	while (base[base_len])
		base_len++;
	num = valid_num(nbr, base);
	if (num == 0)
		return ;
	i = 0;
	while (num)
	{
		arr[i] = base[num % base_len];
		i++;
		num /= base_len;
	}
	write_arr(arr, i);
}

#include <stdio.h>
int main(void)
{
	write(1, "42 in binary: ", 15);
	ft_putnbr_base(42, "01");
	write(1, "\n", 1);

	write(1, "-42 in decimal: ", 17);
	ft_putnbr_base(-42, "0123456789");
	write(1, "\n", 1);

	write(1, "255 in hexadecimal: ", 21);
	ft_putnbr_base(255, "0123456789ABCDEF");
	write(1, "\n", 1);

	write(1, "1234 in custom base 'abcdefgh': ", 33);
	ft_putnbr_base(1234, "abcdefgh");
	write(1, "\n", 1);

	return 0;
}

