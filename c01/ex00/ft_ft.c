/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:28:39 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/27 13:42:51 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main() 
{
	int number = 1337;
	printf("number before calling ft_ft() = %d\n", number);

	ft_ft(&number);
	printf("number after calling ft_ft() = %d\n", number);
	return (1);
}
