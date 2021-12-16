/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:30:52 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 10:22:49 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if (src < dest)
	{	
		while (len > 0)
		{
			((unsigned char *)dest)[len - 1] = ((unsigned char *)src)[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/* void	*ft_memmove(void *dest, const void *src, size_t len)
{
	int		i;

	if (dest == NULL && src == NULL)
		return (dest);
	if (src > dest)
		return (ft_memcpy(dest, src, len));
	i = (int)len - 1;
	while (i >= 0)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i--;
	}
	return (dest);
} */