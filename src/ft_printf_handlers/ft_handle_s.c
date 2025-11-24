/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:47:48 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:18:15 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_handle_s(char *s)
{
	if (s == NULL)
		return (ft_putstr_fd("(null)", 1));
	return (ft_putstr_fd(s, 1));
}
