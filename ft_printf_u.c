/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 11:31:54 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/14 15:21:35 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int c)
{
	int	count;

	count = 0;
	if (c >= 0 && c < 10)
	{
		c = c + '0';
		count += ft_printf_c(c);
	}
	else
	{
		count += ft_printf_u(c / 10);
		c = c % 10 + '0';
		count += ft_printf_c(c);
	}
	return (count);
}
