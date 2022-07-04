/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 13:26:16 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/09 17:29:00 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	if (!str)
		count += write (1, "(null)", 6);
	else
		while (str[i])
			count += write (1, &str[i++], 1);
	return (count);
}
