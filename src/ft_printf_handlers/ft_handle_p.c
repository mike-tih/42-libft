/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:47:48 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:30:30 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "base_constants.h"

int	ft_handle_p(void *p)
{
	size_t	count;

	count = 0;
	if (p == NULL)
		count += ft_putstr_fd("(nil)", 1);
	else
	{
		count += ft_putstr_fd("0x", 1);
		count += ft_putsizet_base_fd((size_t)p, BASE_HEX_LOWER, 1);
	}
	return (count);
}
