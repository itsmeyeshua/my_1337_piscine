/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:19:16 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/02 09:41:51 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	if (size)
	{
		while (src[i] && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (src_len);
}

#include <stdio.h>
int main(void)
{
	char src[] = "Hello, 42!";
	char dest[50];
	unsigned int len;

	len = ft_strlcpy(dest, src, 6);
	printf("Copied string: %s\n", dest);
	printf("Length of src: %u\n", len);
	return 0;
}