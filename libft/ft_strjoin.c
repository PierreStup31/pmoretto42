/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:28:47 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 11:26:53 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	size_t	s1_size;
	size_t	s2_size;
	int		i;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	s1_size = ft_strlen((char *) s1);
	s2_size = ft_strlen((char *) s2);
	dest = malloc(sizeof(char) * (s1_size + s2_size + 1));
	if (dest == NULL)
		return (NULL);
	while (*s1)
		dest[i++] = *s1++;
	while (*s2)
		dest[i++] = *s2++;
	dest[i] = 0;
	return (dest);
}
