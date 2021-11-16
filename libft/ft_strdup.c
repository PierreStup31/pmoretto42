/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:25:49 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/16 14:16:20 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

char    *ft_strdup(const char *src)
{
    int i;
    int len;
    char *dest;

    i = 0;
    len = ft_strlen((char *)src);

    dest = (char *)malloc(sizeof(char) * (len + 1));
    if (!dest)
    {
        return (NULL);
    }

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
	return (dest);
}

/* int main()
{
    char src[] = "salut coquine";
    printf("%s", ft_strdup(*src));
} */