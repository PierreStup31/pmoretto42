/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 16:34:37 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 11:23:00 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
/* {
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
}  */
{
	char	*xs;

	xs = ptr;
	while (len--)
		*xs++ = c;
	return (ptr);
}

/* int main()
{
    char s[] = "salutlamif";
    int c = 'o';
    
    //memset(s, c, 3 * sizeof(char));
    printf("%s", ft_memset(s, c, 3));
}*/