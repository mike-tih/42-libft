/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuint_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:26:05 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:31:44 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putuint_base_fd(unsigned int n, char *base, int fd)
{
	size_t	base_len;
	int		count;

	if (!base)
		return (0);
	base_len = ft_strlen(base);
	if (base_len < 2)
		return (0);
	count = 0;
	if (n >= base_len)
		count += ft_putuint_base_fd(n / base_len, base, fd);
	ft_putchar_fd(base[n % base_len], fd);
	return (count + 1);
}
