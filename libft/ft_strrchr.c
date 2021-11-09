/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:22:59 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/09 22:23:58 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <string.h>
#include <stdio.h>


char *ft_strrchr(const char *s, int c)
{
    unsigned int    i;
    int             cmp;

    i = 0;
    cmp = 0;


    while (s[i])
    {
        if (s[i] == (char)c)
        {
            cmp = i;
			//return ((char *)s + i);
        }
		i++;

    }
    return ((char *)s + cmp);
}

int main () 
{
   const char str[] = "This is just a String Salope"; 
   const char ch = 'i'; 
   char *p;
   p = ft_strrchr(str, ch);
   printf("String starting from %c is: %s", ch, p);
   return 0;
}