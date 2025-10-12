/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:08:31 by mtikhono          #+#    #+#             */
/*   Updated: 2025/10/12 23:56:21 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(const char *str, char separator)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != separator)
		i++;
	return (i);
}

static size_t	ft_count_words(const char *str, char separator)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == separator)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != separator)
				i++;
		}
	}
	return (count);
}

char	**ft_stop(char **words, size_t word)
{
	while (word >= 0)
		free(words[word--]);
	free(words);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	c_words;
	size_t	word;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	c_words = ft_count_words(s, c);
	words = (char **)ft_calloc(sizeof(char *), c_words + 1);
	if (!words)
		return (NULL);
	word = 0;
	i = 0;
	while (word < c_words)
	{
		while (s[i] == c)
			i++;
		len = ft_wordlen(s + i, c);
		words[word] = ft_substr(s, i, len);
		if (!words[word++])
			return (ft_stop(words, word));
		i += len;
	}
	return (words);
}
