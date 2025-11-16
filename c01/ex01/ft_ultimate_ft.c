/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 21:44:30 by zguellou          #+#    #+#             */
/*   Updated: 2024/06/27 11:27:24 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main() 
{
	int number0 = 1337;
	int *number1 = &number0;
	int **number2 = &number1;
	int ***number3 = &number2;
	int ****number4 = &number3;
	int *****number5 = &number4;
	int ******number6 = &number5;
	int *******number7 = &number6;
	int ********number8 = &number7;
	int *********number9 = &number8;
	printf("number9 before calling ft_ultimate_ft() = %d\n", *********number9);

	ft_ultimate_ft(number9);
	printf("number9 after calling ft_ultimate_ft() = %d\n", *********number9);
	return (1);
}