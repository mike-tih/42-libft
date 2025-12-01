/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 14:35:01 by mtikhono          #+#    #+#             */
/*   Updated: 2025/12/01 16:38:42 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_get_next_line.h"

static int	ft_append_realloc(char **s1, char **s2)
{
	char	*tmp;

	tmp = ft_strjoin(*s1, *s2);
	free(*s1);
	free(*s2);
	*s1 = NULL;
	*s2 = NULL;
	if (!tmp)
		return (0);
	*s1 = tmp;
	return (1);
}

static int	ft_cut_realloc(char **line, size_t len)
{
	char	*tmp;

	tmp = ft_substr(*line, 0, len);
	free(*line);
	*line = NULL;
	if (!tmp)
		return (0);
	*line = tmp;
	return (1);
}

static char	*ft_stop(char **str1, char **str2)
{
	free(*str1);
	*str1 = NULL;
	if (str2)
	{
		free(*str2);
		*str2 = NULL;
	}
	return (NULL);
}

char	*ft_read_find_linebreak(int fd, char **line)
{
	char		*increment;
	ssize_t		nbytes;

	while (!ft_strchr(*line, '\n'))
	{
		increment = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (!increment)
			return (ft_stop(line, &increment));
		nbytes = read(fd, increment, BUFFER_SIZE);
		if (nbytes < 0)
			return (ft_stop(line, &increment));
		else if (nbytes == 0)
		{
			if (!*line || **line == '\0')
				return (ft_stop(line, &increment));
			return (ft_stop(&increment, NULL));
		}
		increment[nbytes] = '\0';
		if (!ft_append_realloc(line, &increment))
			return (NULL);
	}
	return (ft_strchr(*line, '\n'));
}

char	*ft_get_next_line(int fd)
{
	static char	*remainder = NULL;
	char		*line;
	char		*npos;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_strdup("");
	if (!line)
		return (ft_stop(&remainder, NULL));
	if (remainder)
	{
		if (!ft_append_realloc(&line, &remainder))
			return (NULL);
	}
	npos = ft_read_find_linebreak(fd, &line);
	if (npos)
	{
		remainder = ft_strdup(npos + 1);
		if (!remainder)
			return (ft_stop(&line, &remainder));
		if (!ft_cut_realloc(&line, npos - line + 1))
			return (ft_stop(&remainder, NULL));
	}
	return (line);
}
