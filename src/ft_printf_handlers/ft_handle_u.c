/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 01:52:47 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:37:23 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "base_constants.h"

int	ft_handle_u(unsigned int u)
{
	return (ft_putuint_base_fd(u, BASE_DEC, 1));
}
