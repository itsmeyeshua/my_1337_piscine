/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:26:46 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/01 19:03:51 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "World!";

	printf("Before ft_strcat: %s\n", str1);
	ft_strcat(str1, str2);
	printf("After ft_strcat : %s\n", str1);
	return 0;
}