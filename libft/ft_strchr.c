/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:33:44 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/02 18:51:19 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
