/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:10:00 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/09 23:52:19 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <strings.h>
//La fonction bzero() met à 0 (octets contenant « \0 ») les n premiers octets du bloc pointé par s. 

void ft_bzero(void * ptr, size_t len)
{
    unsigned char   *c;

    c = (unsigned char *)ptr;
    while (len > 0)
    {
        *c++ = '\0';
        len--;
    }
}  

int		main(void)
{
	printf("======= Test bzero =======\n");

	//test 1
	char	*temoin1 = strdup("bonjour");
	char	*str_test1 = strdup("bonjour");
	bzero(temoin1, 3);
	ft_bzero(str_test1, 3);
	printf("memcmp bzero 1 : %d\n", memcmp(temoin1, str_test1, 7));

	//test 2
	char	*temoin2 = strdup("caca");
	char	*str_test2 = strdup("caca");
	bzero(temoin2, 4);
	ft_bzero(str_test2, 4);
	printf("memcmp bzero 2 : %d\n", memcmp(temoin2, str_test2, 4));

	//test 3
	char	*temoin3 = strdup("bon");
	char	*str_test3 = strdup("bon");
	bzero(temoin3, 4);
	ft_bzero(str_test3, 4);
	printf("memcmp bzero 3 : %d\n", memcmp(temoin3, str_test3, 4));
	putchar('\n');
}


