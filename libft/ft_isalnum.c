/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:57:20 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 09:49:54 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'z') || (c >= '0' && c <= '9'))
	{
		if (c > 'Z' && c < 'a')
			return (0);
		return (1);
	}
	else
		return (0);
}

/* int	main(void)
{
	char *str;
	str = "bonjour10--";
	printf("%d", ft_isalnum(*str));

} */