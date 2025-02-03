/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 23:06:27 by noavetis          #+#    #+#             */
/*   Updated: 2025/02/04 02:06:20 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_find_type(char ch, va_list args, int *count)
{
	if (ch == 'c')
		*count += ft_putchar(va_arg(args, int));
	else if (ch == 's')
	{
		char *s =  va_arg(args, char *);
		if (!s)
		{
			(*count) += write(1, "(null)", 6);
			return ;
		}
		(*count) += (int)ft_strlen(s);
		write(1, s, ft_strlen(s));
	}
	else if (ch == 'p')
	{
		*count += write(1, "0x", 2);
		ft_puthex(va_arg(args, unsigned long), count, "0123456789abcdef");
	}
}
