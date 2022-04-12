/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjose <vjose@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:42:23 by vjose             #+#    #+#             */
/*   Updated: 2021/10/28 14:42:23 by vjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_pointer(void	*ptr)
{
	long int	num;
	int			counter;

	num = (long int)ptr;
	if (num == LONG_MIN)
		return (ft_printf("%s", "0x8000000000000000"));
	if ((unsigned long int)num == ULONG_MAX)
		return (ft_printf("%s", "0xffffffffffffffff"));
	write(1, "0x", 2);
	ft_itoa_hex_lower(num);
	counter = 3;
	while (num > 15)
	{
		counter++;
		num = num / 16;
	}
	return (counter);
}
