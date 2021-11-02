/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 21:18:25 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/02 21:23:51 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<libft.h>
#include<stdio.h>

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
