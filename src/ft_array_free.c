/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 00:27:09 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/26 00:41:52 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_array_free(char **arr)
{
	size_t	i;

	if (!arr)
		return (1);
	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
	arr = NULL;
	return (1);
}
