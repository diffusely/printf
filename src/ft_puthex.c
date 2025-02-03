/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:07:36 by noavetis          #+#    #+#             */
/*   Updated: 2025/02/04 01:54:03 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(size_t num, int *count, char* hex)
{
	int		index;

	if (num == 0)
	{
		*count += write(1, "0", 1);
		return ;
	}
	index = num % 16;
	num /= 16;
	if (num == 0)
	{
		*count += write(1, &hex[index], 1);
		return ;
	}
	ft_puthex(num, count, hex);
	*count += write(1, &hex[index], 1);
}
