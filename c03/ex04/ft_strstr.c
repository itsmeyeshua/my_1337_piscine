/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <zguellou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 20:11:32 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/03 08:52:45 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	size;
	int	i;
	int	counter;

	size = 0;
	if (to_find[size])
		while (to_find[size])
			size++;
	else
		return (str);
	i = 0;
	while (str[i])
	{
		counter = 0;
		while (str[i + counter] == to_find[counter] && str[i + counter])
		{
			counter++;
			if (size == counter)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
