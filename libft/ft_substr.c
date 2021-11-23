/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:23:33 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/17 19:40:18 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(const char *s, unsigned int start, size_t len)
{
    unsigned int	i;
	unsigned int	j;
	char			*cpy;

    i = 0;
    j = start;

    if (!s)
		return (NULL); //Securite si S est Vide

    cpy = malloc(sizeof(char) * (len + 1));
    if (cpy == NULL) //Securite si le MALLOC s'est mal passer
		return (NULL);
    if (ft_strlen((char *)s) < start) //Securite si le taille de S est < que position de Depart
		return (cpy);
    
    
    while (s[j] && i < len) 
		cpy[i++] = s[j++];
	cpy[i] = '\0';
	return (cpy);
}