/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 15:46:46 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/02 18:17:32 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format_s(t_printf *tab)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(tab->args, char *);
	if (str == 0)
		str = "(null)";
	while (str[i])
	{
		tab->count += write(1, &str[i], 1);
		i++;
	}
}
