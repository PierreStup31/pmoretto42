/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:30:52 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/05 15:13:20 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>
#include <stdio.h>
#include <stdlib.h>
//#include <string.h>

#define ELEMENT_COUNT 10

void *ft_memmove(void *dest, const void *src, size_t count)
{
	char *tmp;
	const char *s;

	if (dest <= src) 
    {
		tmp = dest;
		s = src;
		while (count--)
			*tmp++ = *s++;
	} 
    else 
    {
		tmp = dest;
		tmp += count;
		s = src;
		s += count;
		while (count--)
			*--tmp = *--s;
	}
	return dest;
}

int main() 
{

    // On crée une zone de mémoire de 10 entiers et contenant
    // que neuf valeurs. La dixième est non utilisée (0).
    int data[] = { 20, 30, 40, 50, 60, 70, 80, 90, 100, 0 };

    // On affiche le contenu de la collection
    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne

    // On décale les éléménts dans la collection ...
    void * source = (void *) data;
    void * destination = (void *) ( data + 1 );
    size_t size = ELEMENT_COUNT * sizeof( int );
    ft_memmove( destination, source, size );

    // ... pour y insérer une nouvelle valeur en tête
    data[0] = 10;

    // On affiche le contenu de la collection
    for( int i=0; i<ELEMENT_COUNT; i++ ) {
        printf( "%d ", data[i] );
    }
    puts( "" );  // Un retour à la ligne

    return EXIT_SUCCESS;
}