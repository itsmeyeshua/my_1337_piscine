/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 15:54:31 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/03 10:32:47 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	j;
	unsigned int	i;

	len_dest = 0;
	len_src = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	if (size <= len_dest)
		return (len_src + size);
	j = 0;
	i = len_dest;
	while (src[j] && i < size - 1)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (len_dest + len_src);
}
