/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludovictrombert <ludovictrombert@studen    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:22:41 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/23 18:29:14 by ludovictrom      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# define FORMAT '%' '!'

# include <stddef.h>
# include <stdarg.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct printf
{
	va_list		args;
	int			count;
}	t_printf;

void	ft_format_c(t_printf *tab);
void	ft_format_s(t_printf *tab);
void	ft_format_p(t_printf *tab);
void	ft_format_x(t_printf *tab);
void	ft_format_x_maj(t_printf *tab);
void	ft_format_d(t_printf *tab);
void	ft_format_i(t_printf *tab);
char	*ft_itoa(int n);
char	*ft_itoa_unsigned(unsigned int n);
void	ft_format_u(t_printf *tab);
void	ft_putstr(char *str);
char	*ft_itoa_base_long(unsigned long long n, int base);
char	*ft_itoa_base(unsigned int n, int base);
char	*ft_itoa_base_maj(unsigned int n, int base);
int		ft_printf(const char *s, ...);
int		ft_strlen(const char *str);

#endif