/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 00:39:20 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/26 00:41:54 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_arraylen(char **arr)
{
	size_t	count;

	if (!arr)
		return (0);
	count = 0;
	while (arr[count])
		count++;
	return (count);
}
