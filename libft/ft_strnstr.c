/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:02:04 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 11:10:21 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *foin, const char *aiguille, size_t len)
{
	size_t	magnet;

	magnet = ft_strlen(aiguille);
	if (aiguille[0] == '\0')
		return ((char *)&foin[0]);
	if (foin[0] == '\0')
		return (NULL);
	while (len >= magnet)
	{
		len--;
		if (!ft_memcmp(foin, aiguille, magnet))
			return ((char *)foin);
		foin++;
	}
	return (NULL);
}
