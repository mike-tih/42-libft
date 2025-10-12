/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/04 21:42:30 by mtikhono          #+#    #+#             */
/*   Updated: 2025/10/07 17:34:59 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*p;

	c = (char)c;
	p = s + ft_strlen(s);
	while (p >= s)
	{
		if (*p == c)
			return ((char *)p);
		p--;
	}
	return (NULL);
}
