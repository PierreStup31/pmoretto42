/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:52:56 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 10:11:22 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<string.h>

void	*ft_memchr( const void *src, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned int	i;

	ptr = (unsigned char *)src;
	i = 0;
	while (i < len)
	{
		if (ptr[i] == (unsigned char )c)
			return ((void *)ptr + i);
		i++;
	}
	return (NULL);
}

/* int    main()
{
    char s[] = "salut ta mare";
    unsigned char   c = 'e';
    printf("%p\n", ft_memchr(s, c , 14));
    printf("%p", memchr(s, c, 14) );
} */