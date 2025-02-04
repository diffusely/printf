/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 23:06:27 by noavetis          #+#    #+#             */
/*   Updated: 2025/02/04 20:24:47 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_find_type(char ch, va_list args, int *count)
{
	if (ch == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (ch == 's')
		*count += ft_putstr(va_arg(args, char *));
	else if (ch == 'p')
		ft_putptr(va_arg(args, unsigned long), count, "0123456789abcdef");
	else if (ch == 'd' || ch == 'i')
		ft_putnbr(count, va_arg(args, int));
	else if (ch == 'u')
		ft_unsnbr(count, va_arg(args, unsigned int));
	else if (ch == 'x')
		ft_puthex(va_arg(args, unsigned int), count, "0123456789abcdef");
	else if (ch == 'X')
		ft_puthex(va_arg(args, unsigned int), count, "0123456789ABCDEF");
	else if (ch == '%')
		*count += ft_putchar('%');
}
