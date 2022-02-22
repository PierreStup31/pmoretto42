/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_i.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:14:04 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 17:30:21 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_i(t_printf *tab)
{
	char	*str;
	int		i;

	i = va_arg(tab->args, int);
	str = ft_itoa(i);
	ft_putstr(str);
	tab->count += ft_strlen(str);
	free (str);
}
