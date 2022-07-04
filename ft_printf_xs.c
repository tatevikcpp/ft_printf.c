/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xs.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 14:57:31 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/09 17:38:06 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_xs(unsigned int c)
{
	int	counter;

	counter = 0;
	counter += ft_putnbr_counter(c, "0123456789abcdef");
	return (counter);
}
