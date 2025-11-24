/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:47:48 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:36:34 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "base_constants.h"

int	ft_handle_i(int i, char p)
{
	int	count;

	count = 0;
	if (i >= 0)
	{
		if (p == '+')
			count += ft_putchar_fd('+', 1);
		else if (p == ' ')
			count += ft_putchar_fd(' ', 1);
	}
	count += ft_putnbr_base_fd(i, BASE_DEC, 1);
	return (count);
}
