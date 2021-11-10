/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:33:44 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/10 00:13:43 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cette fonction recherche la première occurrence du caractère passé en second paramètre dans
// la chaîne de caractères spécifiée via le premier paramètre.
#include "libft.h"

//#include <stdio.h>
//#include <string.h>

char	*ft_strchr(const char *s, int c)
{
    unsigned int    i;
    i = 0;

    while (s[i])
    {
        if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
    }
    if (c == '\0')
        return ((char*)s + i);
    return (NULL);
}
 
/* int main ()  
{
   const char str[] = "This is just a String Salope 😈"; 
   const char ch = 'o'; 
   char *p;
   p = ft_strchr(str, ch);
   printf("String starting from %c is: %s", ch, p);
   return 0;
} */