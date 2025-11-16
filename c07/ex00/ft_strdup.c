/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 14:29:53 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/08 18:17:32 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		i;
	char	*str;

	i = 0;
	while (src[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

#include <stdio.h>
int main(void)
{
    char *original = "Hello, World!";
    char *copy = ft_strdup(original);

    if (copy)
    {
        printf("Original: %s\n", original);
        printf("Copy: %s\n", copy);
        free(copy);
    }
    else
        printf("Memory allocation failed\n");
    return 0;
}
