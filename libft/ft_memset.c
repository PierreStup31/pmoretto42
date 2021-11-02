/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:34:37 by pmoretto          #+#    #+#             */
/*   Updated: 2021/10/27 19:03:09 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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