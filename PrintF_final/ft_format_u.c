/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 01:43:24 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 17:32:33 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_u(t_printf *tab)
{
	char			*strprint;
	unsigned int	num;

	num = va_arg(tab->args, unsigned int);
	strprint = ft_itoa_unsigned(num);
	ft_putstr(strprint);
	tab->count += ft_strlen(strprint);
	free(strprint);
}
