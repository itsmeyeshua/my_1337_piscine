#include <unistd.h>

void	rush(int x, int y);
void	ft_putchar(char c);

int	check_num(long long a, long long b)
{
	if (a > 2147483647 || a <= 0 || b > 2147483647 || b <= 0)
	{
		write(2, "Enter a positive number that is greater than zero and less than the maximum integer value.\n", 91);
		return (0);
	}
	return (1);
}

long long	ft_atoll(char *str)
{
	int				i;
	int				sign;
	long long		result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	if (str[i])
		return (0);
	return (result * sign);
}

int	main(int ac, char **av)
{
	long long	a;
	long long	b;

	if (ac == 3)
	{
		a = ft_atoll(av[1]);
		b = ft_atoll(av[2]);
		if (check_num(a, b) == 0)
			return (1);
		rush(a, b);
		return (0);
	}
	write(2, "Ex: ./rushXX 6 9\n", 18);
	return (1);
}
