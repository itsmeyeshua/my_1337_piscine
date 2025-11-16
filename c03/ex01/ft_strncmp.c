/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 19:05:04 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/02 10:09:16 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < (n - 1))
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
int main(void)
{
	printf("strncmp(\"Hello\", \"Hello\", 3) = %d\n", ft_strncmp("Hello", "Hello", 3));
	printf("strncmp(\"Hello\", \"Hell\", 5) = %d\n", ft_strncmp("Hello", "Hell", 5));
	printf("strncmp(\"Hell\", \"Hello\", 2) = %d\n", ft_strncmp("Hell", "Hello", 2));
	printf("strncmp(\"Hello\", \"World\", 0) = %d\n", ft_strncmp("Hello", "World", 0));
	return 0;
}