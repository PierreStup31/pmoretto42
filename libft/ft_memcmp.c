/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:54:09 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 10:13:52 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

int	ft_memcmp( const void *ptr1, const void *ptr2, size_t len)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	str1 = (const unsigned char *)ptr1;
	str2 = (const unsigned char *)ptr2;
	i = 0;
	if (str1 == str2 || len == 0)
		return (0);
	while (len--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

/* int	main(void)
{
	const char	ptr1[] = "Bonjour";
	const char	ptr2[] = "Conjour";
	printf("La difference est de : %d", memcmp(ptr1, ptr2, 5));
} */