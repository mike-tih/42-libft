/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 19:22:12 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:22:46 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_base_fd(int nb, char *base, int fd)
{
	int				count;
	unsigned int	n;

	count = 0;
	if (nb < 0)
	{
		count += ft_putchar_fd('-', fd);
		n = -nb;
	}
	else
		n = nb;
	count += ft_putuint_base_fd(n, base, fd);
	return (count);
}
