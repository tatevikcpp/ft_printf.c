/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xl.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:10:28 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/09 17:39:55 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_xl(unsigned int c)
{
	int	counter;

	counter = 0;
	counter += ft_putnbr_counter(c, "0123456789ABCDEF");
	return (counter);
}
