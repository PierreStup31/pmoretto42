/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 13:52:56 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/09 23:57:24 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<string.h>

void * ft_memchr( const void * s, int c, size_t size )
{
    unsigned char *ptr;
    unsigned int    i;

    ptr = (unsigned char *)s;
    i = 0;

    while (i < size)
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
}
 */