/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vjose <vjose@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:31:31 by vjose             #+#    #+#             */
/*   Updated: 2021/10/28 15:31:31 by vjose            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_printf(const char *str, ...);
int		ft_print_char(int c);
int		ft_print_string(char *str);
int		ft_print_pointer(void	*ptr);
int		ft_print_decimal(int n);
int		ft_print_unsigned_decimal(int n);
void	ft_itoa_hex_lower(long int num);
void	ft_itoa_hex_upper(long int num);
int		ft_print_hex_lower(unsigned int n);
int		ft_print_hex_upper(unsigned int n);
int		ft_print_percent(void);

#endif
