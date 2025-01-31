/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 18:31:58 by noavetis          #+#    #+#             */
/*   Updated: 2025/02/01 00:19:27 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *str, ...)
{
    va_list args;
    char a = 'c';
    
    va_start(args, str);
    while (*str)
    {
        if (*str == '%')
        {
            str++;
            if (*str)
                ft_find_type(*str, &args);
            str++;
        }
        else
            write(1, str++, 1);
    }
    va_end(args);
}