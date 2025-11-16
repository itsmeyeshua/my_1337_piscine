/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zguellou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 13:58:30 by zguellou          #+#    #+#             */
/*   Updated: 2024/07/15 21:55:01 by zguellou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_seperator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (0);
		charset++;
	}
	return (1);
}

int	count_words(char *str, char *charset)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] && char_seperator(str[i], charset) == 0)
			i++;
		if (str[i] && char_seperator(str[i], charset) == 1)
			words++;
		while (str[i] && char_seperator(str[i], charset) == 1)
			i++;
	}
	return (words);
}

char	*populate_str(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] && char_seperator(str[i], charset) == 1)
		i++;
	word = malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (str[i] && char_seperator(str[i], charset) == 1)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		words_count;
	char	**strs;
	int		i;

	i = 0;
	words_count = count_words(str, charset);
	strs = malloc(sizeof(char *) * (words_count + 1));
	if (strs == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && char_seperator(*str, charset) == 0)
			str++;
		if (*str && char_seperator(*str, charset) == 1)
		{
			strs[i] = populate_str(str, charset);
			i++;
		}
		while (*str && char_seperator(*str, charset) == 1)
			str++;
	}
	strs[i] = 0;
	return (strs);
}

#include <stdio.h>
int main(int ac, char **av)
{
	if (ac != 3) {
		fprintf(stderr, "Ex: ./ft_split \"Hello,42World,Split,This\" \",\"\n");
		return 1;
	}
    char *text = av[1];
    char *sep = av[2];
    char **split = ft_split(text, sep);

    if (split)
    {
        for (int i = 0; split[i]; i++)
            printf("Word %d: %s\n", i, split[i]);
        for (int i = 0; split[i]; i++)
            free(split[i]);
        free(split);
    }
    return 0;
}
