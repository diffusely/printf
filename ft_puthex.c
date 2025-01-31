/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noavetis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 20:07:36 by noavetis          #+#    #+#             */
/*   Updated: 2025/01/31 21:08:40 by noavetis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_puthex(size_t num, char hex[17])
{
	int		index;
	int		count;
	
	if (num == 0)
	{
		write(1, "0", 1);
		return ;
	}
	index = num % 16;
	num /= 16;
	if (num == 0)
	{
		write(1, &hex[index], 1);
		return ;
	}
	ft_puthex(num, hex);
	write(1, &hex[index], 1);
}
