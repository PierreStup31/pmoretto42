/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 04:51:07 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/03 23:43:22 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include<stdio.h>

/*size_t	ft_strlcpy(char *dst, const char *src, size_t size);
//char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}*/

int	main(void)
{
	char	tab[] = "salut";
	char	tab2[10];
	size_t	size;
	size = sizeof(tab2);


	strlcpy(tab2, tab, size);
	printf("%s\n", tab2);
	printf("%zu\n", size);
}
