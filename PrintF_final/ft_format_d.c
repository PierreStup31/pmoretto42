/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 20:06:41 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 17:25:46 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_d(t_printf *tab)
{
	char	*str;
	int		i;

	i = va_arg(tab->args, int);
	str = ft_itoa(i);
	ft_putstr(str);
	tab->count += ft_strlen(str);
	free(str);
}
