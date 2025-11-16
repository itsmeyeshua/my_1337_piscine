/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:44:53 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/01 21:03:27 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "World!";

	printf("Before strncat: %s\n", str1);
	ft_strncat(str1, str2, 3);
	printf("After strncat : %s\n", str1);
	return 0;
}