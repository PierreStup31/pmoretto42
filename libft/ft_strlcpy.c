/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 04:51:07 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 11:04:24 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<string.h>
//#include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	size_t	i;
	int		len2;

	len2 = ft_strlen((char *)src);
	i = 0;
	if (len == 0)
		return (len2);
	while (i < (len - 1) && i < (size_t)len2)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len2);
}

/* int	main(void)
{
	char	tab[] = "salut";
	size_t	len = sizeof(tab);
	char	tab2[len];


	strlcpy(tab2, tab, 20);
	printf("%c\n", strlcpy(tab2, tab, len));
	printf("%s\n", strlcpy(tab2, tab, len));
}*/