/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:57:24 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/08 13:59:31 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_p(t_printf *tab)
{
	unsigned long long	num;
	char				*str;

	num = va_arg(tab->args, unsigned long long);
	tab->count += write(1, "0x", 2);
	str = ft_itoa_base_long(num, 16);
	ft_putstr(str);
	tab->count += ft_strlen(str);
	free(str);
}
