/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 02:00:01 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:30:50 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "base_constants.h"

int	ft_handle_x(unsigned int u, char p)
{
	int	count;

	count = 0;
	if (p == '#' && u != 0)
		count += ft_putstr_fd("0x", 1);
	count += ft_putnbr_base_fd(u, BASE_HEX_LOWER, 1);
	return (count);
}

int	ft_handle_x_upper(unsigned int u, char p)
{
	int	count;

	count = 0;
	if (p == '#' && u != 0)
		count += ft_putstr_fd("0X", 1);
	count += ft_putnbr_base_fd(u, BASE_HEX_UPPER, 1);
	return (count);
}
