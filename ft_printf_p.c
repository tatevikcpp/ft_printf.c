/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:42:54 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/14 15:21:49 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_counter_u(unsigned long int nbr, const char *base)
{
	int	counter;

	counter = 0;
	if (nbr >= ft_strlen(base))
		counter = counter + ft_putnbr_counter (nbr / ft_strlen(base), base);
	counter = counter + write(1, &base[nbr % ft_strlen(base)], 1);
	return (counter);
}

int	ft_printf_p(unsigned long int c)
{
	int	counter;

	counter = 0;
	counter += write(1, "0x", 2);
	counter += ft_putnbr_counter_u(c, "0123456789abcdef");
	return (counter);
}
