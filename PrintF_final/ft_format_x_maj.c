/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_x_maj.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 02:28:03 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 17:33:44 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_x_maj(t_printf *tab)
{
	unsigned int	num;
	char			*str;

	num = va_arg(tab->args, unsigned int);
	str = ft_itoa_base_maj(num, 16);
	ft_putstr(str);
	tab->count += ft_strlen(str);
	free(str);
}
