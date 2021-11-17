/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:28:47 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/16 17:28:42 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(const char *str1, const char *str2)
{
    int  i;
    int  j;
    int  str1_size;
    int  str2_size;
    char *s;

    if (!str1 || !str2)
		return (NULL);
    str1_size = ft_strlen(str1);
    str2_size = ft_strlen(str2);
    s = malloc(sizeof(char) * (str1_size + str2_size + 1));

    if (!s)
		return (NULL);
    i = 0;

    while (str1[i])
    {
        s[i] = str1[i];
        i++;
    }
    j = 0;
    while (str2[j])
    {
        s[i] = str2[j];
        i++;
        j++;
    }
    s[i] = '\0';
    return (s);

    
}