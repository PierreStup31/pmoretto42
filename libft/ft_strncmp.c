/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 04:16:51 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 11:08:49 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;

	i = 0;
	if (len <= 0)
	{
		return (0);
	}
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < len - 1 )
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

/* int	main(void)
{
	unsigned int 	n;

	n = 6;
	char	s1[] = "salututi";
	char	s2[] = "salututi";
	printf("%d", ft_strncmp(s1, s2, n));
} */