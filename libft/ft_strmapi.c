/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 18:04:18 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/17 19:40:12 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applique la fonction ’f’ à chaque caractère de la
chaine de caractères passée en argument pour créer
une nouvelle chaine de caractères (avec malloc(3))
résultant des applications successives de ’f’ */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		str_len;
	int		i;
	char	*str;

    i = 0;

	if (!s)
		return (NULL);
	str_len = ft_strlen((char *)s);
	str = malloc(sizeof(char) * (str_len + 1));
	if (!str)
		return (NULL);
	
	while (i < str_len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}