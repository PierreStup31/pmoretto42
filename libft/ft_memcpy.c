/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:15:17 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 10:19:34 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t len)
{
	char		*tmp;
	const char	*s;

	tmp = dest;
	s = src;
	if (dest == NULL && src == NULL)
		return (NULL);
	while (len--)
	{
		*tmp++ = *s++;
	}
	return (dest);
}

/* int main()
{
    char s1[20];
    const char  s2[] = "salut la bite";
    
    printf("%s\n", s1);
    ft_memcpy(s1, s2, 20);
    printf("%s", s1);


} */

/* int main(void) 
{
    int array [] = { 54, 85, 20, 63, 21 };
    int * copy = NULL;
    int count = sizeof( int ) * 5;
       
    // Memory allocation and copy //
    copy = (int *) malloc( count );
    ft_memcpy( copy, array, count );
        
    // Display the copied values //
    for( count=0; count<5; count++ ) {
        printf( "%d ", copy[ count ] );
    }
    printf( "\n" );
        
    free( copy );
    
    return (0);
} */
