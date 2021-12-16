/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:18:25 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 11:05:40 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	size_t	dcp;

	dcp = 0;
	while (c[dcp] != '\0')
	{
		dcp++;
	}
	return (dcp);
}

/*int	main(void)
{
	char *str;
	
	str = "Salut";
	ft_strlen(str);//fonction pour decompte et boucle
	printf("%zu", ft_strlen(str));
}*/
