/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 23:06:27 by noavetis          #+#    #+#             */
/*   Updated: 2025/02/01 00:56:09 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include "libft/libft.h"

void    ft_find_type(char ch, va_list *args)
{
    char c;
    if (ch == 'c')
    {
        c = va_arg(*args, int);
        write(1, &c, 1);
    }
    else if (ch == 's')
    {
        char *s =  va_arg(*args, char *);
        write(1, s, ft_strlen(s));
    }
    else if (ch == 'p')
    {
        void *s =  va_arg(*args, void *);
        char l_hex[17] = "0123456789abcdef";
        size_t temp = (size_t)s;

        write(1, "0x", 2);
        ft_puthex(temp, l_hex);
    }
    // else if()
    // {
        
    // }
}

