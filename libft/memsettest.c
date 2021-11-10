/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memsettest.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:30:02 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/10 00:57:30 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<unistd.h>


void * memset(void * s, int c, size_t len)
{
	char *xs = s;

	while (len--)
		*xs++ = c;
	return s;
}


/* int main()
{
    char s[] = "salutlamif";
    int c = 42;
    
    //memset(s, c, 3 * sizeof(char));
    memset(s, c, 3);
    printf("%s",s);
} */