/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:30:52 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/11 17:06:57 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Cette fonction permet de copier un bloc de mémoire spécifié par le paramètre source dans un nouvel emplacement désigné
 par le paramètre destination. On peut donc dire que cette fonction est proche de la fonction MEMCPY.
Néanmoins, la différence réside dans le fait que la fonction MEMMOVE accepte que les deux zones de mémoire puissent
 se chevaucher.
En cas de chevauchement, la copie se passe comme si les octets de la zone source étaient d'abord copiés dans une zone
 temporaire, qui ne chevauche aucune des deux zones pointées par source et destination, et les octets sont 
 ensuite copiés de la zone temporaire vers la zone de destination. */


#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

/* void * ft_memmove(void *dest, const void *src, size_t len)
{
	char *d;
	const char *s;
	size_t	i;

	s = src;
	d = dest;
	i = 0;

	if (dest == NULL && src == NULL)
		return (dest);
		
	if (dest > src)
    {
		
		while (len--)
			d[len] = s[len];
	}
    else 
    {
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
} */

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;

	if (dest == NULL && src == NULL)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, len));
	i = (int)len - 1;
	while (i >= 0)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i--;
	}
	return (dest);
}