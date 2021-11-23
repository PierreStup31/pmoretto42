/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 14:39:55 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/16 16:25:08 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

size_t  ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t		i;
	size_t		j;
	size_t		src_size;
	size_t		dst_size;

	src_size = ft_strlen((char*)src);
	dst_size = ft_strlen((char*)dest);

	if (!dest || !src || len <= 0 || len < dst_size)
		return (src_size + len);

	i = 0;
    j = dst_size;
	while (j < (len - 1) && i < (size_t)src_size)
	{

		dest[j] = src[i];
		i++;
        j++;
	}
	dest[j] = '\0';
	return (src_size + dst_size);
}
