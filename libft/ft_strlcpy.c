/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 04:51:07 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/08 14:34:23 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i > len)
	{
		dest[i] = src[i];
		i++;
		if (dest[i] == '\0')
			return (i);
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	tab[] = "salut";
	size_t	len = sizeof(tab);
	char	tab2[len];


	strlcpy(tab2, tab, 20);
	printf("%c\n", strlcpy(tab2, tab, len));
	printf("%s\n", strlcpy(tab2, tab, len));
}
