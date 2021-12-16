/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:23:33 by pierremoret       #+#    #+#             */
/*   Updated: 2021/12/16 11:17:22 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	j;
	char			*cpy;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	if (ft_strlen((char *)s) < start)
		return (cpy);
	while (s[j] && i < len)
		cpy[i++] = s[j++];
	cpy[i] = '\0';
	return (cpy);
}
