/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 01:23:05 by mtikhono          #+#    #+#             */
/*   Updated: 2025/10/07 01:50:22 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_numlen(const int n)
{
	size_t	len;
	long	nb;

	len = 1;
	nb = (long)n;
	if (n < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb > 9)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	long	nb;
	char	*str;

	len = ft_numlen(n);
	str = ft_calloc(sizeof(char), len + 1);
	if (!str)
		return (NULL);
	nb = (long)n;
	if (n < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	if (nb == 0)
		str[0] = '0';
	while (nb)
	{
		str[len - 1] = nb % 10 + '0';
		nb /= 10;
		len--;
	}
	return (str);
}
