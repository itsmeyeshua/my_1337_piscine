/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 10:12:04 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/01 11:19:01 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

#include <stdio.h>
int main(void)
{
	char src[] = "42School";
	char dest[50];

	ft_strncpy(dest, src, 5);
	dest[5] = '\0';
	printf("src: %s\n", src);
	printf("dest (first 5 chars): %s\n", dest);
	return 0;
}