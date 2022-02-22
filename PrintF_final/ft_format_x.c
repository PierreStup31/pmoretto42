/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:27:45 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 17:34:27 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_x(t_printf *tab)
{
	unsigned int	num;
	char			*str;

	num = va_arg(tab->args, unsigned int);
	str = ft_itoa_base(num, 16);
	ft_putstr(str);
	tab->count += ft_strlen(str);
	free(str);
}
