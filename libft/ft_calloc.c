/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 17:36:26 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/17 14:50:55 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* elementCount: permet de spécifier le nombre d'éléments consécutifs à réserver dans le bloc de mémoire.

elementSize : permet de fixer la taille (en nombre d'octets) d'un élément. */
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void    *ptr;
    int     len;

    len = (count * size);
    ptr = malloc(len);
    
    if (ptr == 0)
        return (ptr);

    ft_bzero(ptr, len);
    //ft_memset(ptr, 0, len);
    return (ptr);
}
