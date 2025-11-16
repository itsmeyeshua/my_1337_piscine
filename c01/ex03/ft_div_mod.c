/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:41:29 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/27 13:42:25 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 13;
	int b = 37;
	int div;
	int mod;
	ft_div_mod(a, b, &div, &mod);
	printf("%d %% %d = %d\n", a, b, mod);
	printf("%d / %d = %d\n", a, b, div);
}
