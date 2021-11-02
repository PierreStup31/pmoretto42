/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:34:37 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/02 21:59:58 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cette fonction permet de remplir une zone mémoire, identifiée par son adresse et sa taille, avec une valeur précise.
//pointer : permet de spécifier l'adresse du bloc mémoire à ré-initialiser.
//value : indique la valeur à utiliser pour remplir le bloc de mémoire.
//size : indique le nombre d'octets à initialiser.
#include <libft.h>

void *ft_memset( void *ptr, int val, size_t len)
{
	size_t	i;
	i = 0;

	if (!ptr)
		return (NULL);

	while (i < len)
	{
		*(unsigned char*)(ptr + i) = (unsigned char*)val;
		i++;
	}
	return (ptr);
} 