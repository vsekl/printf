/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_letters.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjose <vjose@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:43:31 by vjose             #+#    #+#             */
/*   Updated: 2021/10/28 14:43:31 by vjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	ft_strlen(const char *s)
{
	size_t	counter;

	counter = 0;
	while (s[counter] != '\0')
		counter++;
	return (counter);
}

int	ft_print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_print_string(char *str)
{	
	int	len;

	if (str == NULL)
		return (ft_printf("%s", "(null)"));
	len = ft_strlen(str);
	write(1, str, len);
	return (len);
}

int	ft_print_percent(void)
{
	write(1, "%", 1);
	return (1);
}
