/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/05 01:00:32 by mtikhono          #+#    #+#             */
/*   Updated: 2025/10/12 20:33:01 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				diff;
	size_t			i;

	i = 0;
	while (i < n)
	{
		diff = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (diff != 0)
			return (diff);
		i++;
	}
	return (0);
}
