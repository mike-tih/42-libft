/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_handlers.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 00:30:23 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:55:40 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_HANDLERS_H
# define FT_PRINTF_HANDLERS_H

# include <stdarg.h>
# include <stddef.h>

int	ft_handle_c(int c);
int	ft_handle_s(char *s);
int	ft_handle_p(void *p);
int	ft_handle_i(int i, char p);
int	ft_handle_u(unsigned int u);
int	ft_handle_x(unsigned int u, char p);
int	ft_handle_x_upper(unsigned int u, char p);

#endif