/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjose <vjose@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 18:02:21 by vjose             #+#    #+#             */
/*   Updated: 2021/10/27 18:02:21 by vjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

static int	ft_is_cspdiux(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' || \
	c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (1);
	return (0);
}

static int	ft_print(char c, va_list args)
{
	int	result;

	result = 0;
	if (c == 'c')
		result = ft_print_char(va_arg(args, int));
	else if (c == 's')
		result = ft_print_string(va_arg(args, char *));
	else if (c == 'p')
		result = ft_print_pointer(va_arg(args, void *));
	else if (c == 'd' || c == 'i')
		result = ft_print_decimal(va_arg(args, int));
	else if (c == 'u')
		result = ft_print_unsigned_decimal(va_arg(args, int));
	else if (c == 'x')
		result = ft_print_hex_lower(va_arg(args, int));
	else if (c == 'X')
		result = ft_print_hex_upper(va_arg(args, int));
	else if (c == '%')
		result = ft_print_percent();
	return (result);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		result;
	va_list	args;

	i = 0;
	result = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%' && ft_is_cspdiux(str[i + 1]))
		{
			result = result + ft_print(str[i + 1], args);
			i = i + 2;
		}
		else
		{
			write(1, &str[i], 1);
			result++;
			i++;
		}
	}
	va_end(args);
	return (result);
}
