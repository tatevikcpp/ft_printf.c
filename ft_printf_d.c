/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:10:56 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/14 15:21:11 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_d(int c)
{
	int	count;

	count = 0;
	if (c == -2147483648)
	{
		count += ft_printf_c('-');
		count += ft_printf_c('2');
		c = 147483648;
	}
	if (c < 0)
	{
		c = c * -1;
		count += ft_printf_c('-');
	}
	if (c >= 10)
	{
		count += ft_printf_d(c / 10);
		count += ft_printf_d(c % 10);
		return (count);
	}
	else
		count += ft_printf_c(c + '0');
	return (count);
}
