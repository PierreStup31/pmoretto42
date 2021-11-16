/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 04:16:51 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/16 14:16:45 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int len)
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