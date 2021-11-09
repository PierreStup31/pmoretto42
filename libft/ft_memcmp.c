/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 14:54:09 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/05 14:41:24 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<libft.h>
#include<stdio.h>

int memcmp( const void * ptr1, const void * ptr2, size_t len)
{
    unsigned int	i;
    const char    *str1 = ptr1;
    const char    *str2 = ptr2;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
    //while (len--)
	{
		i++;
	}
	/* return ((unsigned char*) ptr1[i] - (unsigned char*) ptr2[i]); */
    return (str1[i] - str2[i]);
}

int	main(void)
{
	const char	ptr1[] = "Bonjour";
	const char	ptr2[] = "Aonjour";
    
	printf("La difference est de : %d", memcmp(ptr1, ptr2, 5));
}