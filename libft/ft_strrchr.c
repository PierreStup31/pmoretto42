/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:22:59 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 11:10:59 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strrchr(const char *src, int c)
{
	int	i;

	i = ft_strlen(src);
	while (i >= 0)
	{
		if (src[i] == (char)c)
			return ((char *)src + i);
		i--;
	}
	return (NULL);
}

/* int main () 
{
   const char str[] = "This is just a String Salope"; 
   const char ch = 'z'; 
   char *p;
   p = ft_strrchr(str, ch);
   printf("String starting from %c is: %s", ch, p);
   return 0;
}  */