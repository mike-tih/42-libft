/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 00:36:00 by mtikhono          #+#    #+#             */
/*   Updated: 2025/10/13 00:38:22 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_chrc(const char *s, int c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s == (char)c)
			count++;
		s++;
	}
	return (count);
}