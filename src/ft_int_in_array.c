/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_in_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 21:15:08 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/25 21:15:15 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_int_in_array(int *array, size_t size, int value)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == value)
			return (1);
		i++;
	}
	return (0);
}
