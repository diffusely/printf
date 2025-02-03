/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 18:27:29 by noavetis          #+#    #+#             */
/*   Updated: 2025/02/04 02:09:51 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

void	ft_puthex(size_t num, int *count, char* hex);
size_t	ft_putchar(char c);
void	ft_find_type(char ch, va_list args, int *count);
int		ft_printf(const char *str, ...);

#endif