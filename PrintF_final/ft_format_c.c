/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 14:28:24 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 18:17:51 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_c(t_printf *tab)
{
	char	c;

	c = va_arg(tab->args, int);
	tab->count += write(1, &c, 1);
}
