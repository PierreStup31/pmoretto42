/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 04:51:07 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/11 17:06:51 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
//#include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	int	len2;

	len2 = ft_strlen((char*)src); //On recupere la taille de SRC
	i = 0;

	if (!dest || !src || len == 0) // Securite si DEST ou SRC = 0 || len = 0
		return (len2); // On return la taille de SRC

	while (i < (len - 1) && i < (size_t)len2) 
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // On rajoute le \0 a la fin de la DEST
	return (len2);
}

/* int	main(void)
{
	char	tab[] = "salut";
	size_t	len = sizeof(tab);
	char	tab2[len];


	strlcpy(tab2, tab, 20);
	printf("%c\n", strlcpy(tab2, tab, len));
	printf("%s\n", strlcpy(tab2, tab, len));
}
 */