/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:02:04 by pierremoret       #+#    #+#             */
/*   Updated: 2021/11/11 15:43:15 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *foin, const char *aiguille, size_t len)
{
	size_t magnet;

	magnet = ft_strlen(aiguille);
		if (aiguille[0] == '\0')
		return ((char *)&foin[0]);
	if (foin[0] == '\0')
		return (NULL);
	while (len >= magnet)
	{
		len--;
		if (!ft_memcmp(foin, aiguille, magnet)) // egal a 0 ----> aucune diff
			return (char *)foin;
		foin++;
	}
	return (NULL);
}

