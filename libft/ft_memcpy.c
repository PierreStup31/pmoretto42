/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:15:17 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/05 14:41:23 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <stdlib.h>

void *ft_memcpy(void *dest, const void *src, size_t count)
{
	char *tmp = dest;
	const char *s = src;

	while (count--)
		*tmp++ = *s++;
	return dest;
}

int main()
{
    char s1[];
    const char  s2[] = "LaBite";
    
    printf("%s\n", s1);
    ft_memcpy(s1, s2, 10);
    printf("%s", s1);
}

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
