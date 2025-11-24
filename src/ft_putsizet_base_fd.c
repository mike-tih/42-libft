/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putsizet_base_fd.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:27:37 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:34:05 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putsizet_base_fd(size_t n, char *base, int fd)
{
	size_t	base_len;
	int		count;

	base_len = ft_strlen(base);
	if (!base_len || base_len < 2)
		return (0);
	count = 0;
	if (n >= base_len)
		count += ft_putsizet_base_fd(n / base_len, base, fd);
	ft_putchar_fd(base[n % base_len], fd);
	return (count + 1);
}
