/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:33:44 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/02 21:57:11 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cette fonction recherche la première occurrence du caractère passé en second paramètre dans
// la chaîne de caractères spécifiée via le premier paramètre.
#include <libft.h>

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
    return (NULL);
}
