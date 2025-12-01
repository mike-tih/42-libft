/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/03 15:08:31 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/25 16:54:35 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_wordlen(const char *str, int (*is_sep)(int))
{
	size_t	i;

	i = 0;
	while (str[i] && !is_sep((unsigned char)str[i]))
		i++;
	return (i);
}

static size_t	ft_count_words(const char *str, int (*is_sep)(int))
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_sep((unsigned char)str[i]))
			i++;
		else
		{
			count++;
			while (str[i] && !is_sep((unsigned char)str[i]))
				i++;
		}
	}
	return (count);
}

static char	**ft_stop(char **words, size_t word)
{
	while (word > 0)
		free(words[--word]);
	free(words);
	return (NULL);
}

char	**ft_split_if(char const *s, int (*is_sep)(int))
{
	char	**words;
	size_t	c_words;
	size_t	word;
	size_t	i;
	size_t	len;

	if (!s || !is_sep)
		return (NULL);
	c_words = ft_count_words(s, is_sep);
	words = (char **)ft_calloc(sizeof(char *), c_words + 1);
	if (!words)
		return (NULL);
	word = 0;
	i = 0;
	while (word < c_words)
	{
		while (s[i] && is_sep((unsigned char)s[i]))
			i++;
		len = ft_wordlen(s + i, is_sep);
		words[word] = ft_substr(s, i, len);
		if (!words[word++])
			return (ft_stop(words, word));
		i += len;
	}
	return (words);
}
