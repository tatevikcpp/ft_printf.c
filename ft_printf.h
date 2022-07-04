/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smoin-sh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:41:32 by smoin-sh          #+#    #+#             */
/*   Updated: 2022/05/09 18:02:39 by smoin-sh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*-----Adding Headers----*/
# include <unistd.h>
# include <stdarg.h>
/*-----Function Prototypes----*/
int				ft_printf(const char *str, ...);
int				ft_conversions(va_list args, const char format);
int				ft_printpercent(void);
int				ft_printf_s(char *str);
int				ft_printf_c(char c);
int				ft_printf_xl(unsigned int c);
int				ft_printf_xs(unsigned int c);
int				ft_printf_u(unsigned int c);
int				ft_printf_p(unsigned long int c);
int				ft_printf_d(int c);
unsigned int	ft_strlen(char const *str);
int				ft_putnbr_counter(long long int nbr, const char *base);

#endif
