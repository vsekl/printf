/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjose <vjose@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:59:29 by vjose             #+#    #+#             */
/*   Updated: 2021/10/28 14:59:29 by vjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putnbr(long int n)
{
	char	buf;

	if (n >= 10)
	{
		ft_putnbr(n / 10);
		buf = (n % 10) + '0';
		write(1, &buf, 1);
	}
	else if (n >= 0 && n < 10)
	{
		buf = n + '0';
		write(1, &buf, 1);
	}
	else
	{
		write(1, "-", 1);
		ft_putnbr(-n);
	}
}

int	ft_print_decimal(int n)
{
	int			counter;
	long int	num;

	num = n;
	ft_putnbr(num);
	counter = 1;
	if (num < 0)
	{
		num = -num;
		counter++;
	}
	while (num > 9)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}

int	ft_print_unsigned_decimal(int n)
{
	int			counter;
	long int	num;

	num = (unsigned int)n;
	ft_putnbr(num);
	counter = 1;
	while (num > 9)
	{
		num = num / 10;
		counter++;
	}
	return (counter);
}
