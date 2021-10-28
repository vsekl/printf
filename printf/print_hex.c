/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjose <vjose@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:59:37 by vjose             #+#    #+#             */
/*   Updated: 2021/10/28 14:59:37 by vjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_itoa_hex_lower(long int num)
{	
	char	c;

	if (num > 15)
		ft_itoa_hex_lower(num / 16);
	c = num - (num / 16) * 16 + '0';
	if (c > '9')
		c = c + 39;
	write(1, &c, 1);
}

void	ft_itoa_hex_upper(long int num)
{	
	char	c;

	if (num > 15)
		ft_itoa_hex_upper(num / 16);
	c = num - (num / 16) * 16 + '0';
	if (c > '9')
		c = c + 7;
	write(1, &c, 1);
}

int	ft_print_hex_lower(unsigned int n)
{
	int	counter;

	counter = 1;
	ft_itoa_hex_lower(n);
	while (n > 15)
	{
		counter++;
		n = n / 16;
	}
	return (counter);
}

int	ft_print_hex_upper(unsigned int n)
{
	int	counter;

	counter = 1;
	ft_itoa_hex_upper(n);
	while (n > 15)
	{
		counter++;
		n = n / 16;
	}
	return (counter);
}
