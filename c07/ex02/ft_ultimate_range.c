/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 20:26:10 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/09 09:42:22 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}

#include <stdio.h>
int main(void)
{
    int *tab;
    int **range = &tab;
    int min = 3;
    int max = 8;
    int size = ft_ultimate_range(range, min, max);

    if (size > 0)
    {
        for (int i = 0; i < size; i++)
            printf("%d ", tab[i]);
        printf("\n");
        free(tab);
    }
    else
        printf("Empty or invalid range\n");
    return 0;
}

