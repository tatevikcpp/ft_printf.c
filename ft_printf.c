/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 18:16:01 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/15 15:21:30 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpercent(void)
{
	write (1, "%", 1);
	return (1);
}

int	ft_conversions(va_list args, const char format)
{
	int	print_length;

	print_length = 0;
	if (format == 'c')
		print_length += ft_printf_c(va_arg(args, int));
	else if (format == 's')
		print_length += ft_printf_s(va_arg(args, char *));
	else if (format == 'p')
		print_length += ft_printf_p(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		print_length += ft_printf_d(va_arg(args, int));
	else if (format == 'u')
		print_length += ft_printf_u(va_arg(args, unsigned int));
	else if (format == 'x')
		print_length += ft_printf_xs(va_arg(args, unsigned int));
	else if (format == 'X')
		print_length += ft_printf_xl(va_arg(args, unsigned int));
	else if (format == '%')
		print_length += ft_printpercent();
	return (print_length);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	args;
	int		print_length;

	i = 0;
	print_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			print_length += ft_conversions(args, str[i + 1]);
			i++;
		}
		else
			print_length += ft_printf_c(str[i]);
		i++;
	}
	va_end(args);
	return (print_length);
}
