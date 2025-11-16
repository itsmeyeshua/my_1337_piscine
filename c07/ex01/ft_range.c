/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 18:18:25 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/08 20:50:16 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*arr;
	int	i;

	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}

#include <stdio.h>
int main(void)
{
    int min = 5;
    int max = 10;
    int *range = ft_range(min, max);

    if (range)
    {
        for (int i = 0; i < max - min; i++)
            printf("%d ", range[i]);
        printf("\n");
        free(range);
    }
    else
        printf("Invalid range\n");
    return 0;
}
