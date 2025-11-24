/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtikhono <mtikhono@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 00:25:05 by mtikhono          #+#    #+#             */
/*   Updated: 2025/11/24 19:01:11 by mtikhono         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "ft_printf_handlers.h"

static int	ft_handle_conversion(va_list *args, char c, char p)
{
	if (c == '%')
		return (ft_putchar_fd('%', 1));
	if (c == 'c')
		return (ft_handle_c(va_arg(*args, int)));
	if (c == 's')
		return (ft_handle_s(va_arg(*args, char *)));
	if (c == 'p')
		return (ft_handle_p(va_arg(*args, void *)));
	if (c == 'i' || c == 'd')
		return (ft_handle_i(va_arg(*args, int), p));
	if (c == 'u')
		return (ft_handle_u(va_arg(*args, unsigned int)));
	if (c == 'x')
		return (ft_handle_x(va_arg(*args, int), p));
	if (c == 'X')
		return (ft_handle_x_upper(va_arg(*args, int), p));
	return (0);
}

static int	ft_isprefix(char c)
{
	return (c == '#' || c == ' ' || c == '+');
}

static char	select_prefix(const char *prefixes, int prefixes_len, char c)
{
	int	i;

	if (c == 'x' || c == 'X')
	{
		i = 0;
		while (i < prefixes_len)
			if (prefixes[i++] == '#')
				return ('#');
	}
	else if (c == 'i' || c == 'd')
	{
		i = 0;
		while (i < prefixes_len)
		{
			if (prefixes[i] == '+')
				return ('+');
			if (prefixes[i] == ' ')
				return (' ');
			i++;
		}
	}
	return ('\0');
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	size_t	count;
	size_t	prefix_start;
	char	p;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			prefix_start = ++i;
			while (ft_isprefix(str[i]))
				i++;
			p = select_prefix(&str[prefix_start], i - prefix_start, str[i]);
			count += ft_handle_conversion(&args, str[i], p);
		}
		else
			count += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return (count);
}
