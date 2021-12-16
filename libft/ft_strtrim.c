/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 09:07:44 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 11:15:10 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_string_end(char *s1, char *set, int i)
{
	size_t	s1_size;
	int		k;

	s1_size = ft_strlen(s1);
	k = 0;
	while (s1[i])
	{
		while (s1[s1_size] != set[k])
		{
			if (!set[k])
				return (s1_size + 1);
			k++;
		}
		k = 0;
		s1_size--;
	}
	return (s1_size);
}

static	size_t	ft_string_start(char *s1, char *set, int k)
{
	size_t	i;

	i = 0;
	if (!set[k])
		return (0);
	while (s1[i])
	{
		while (s1[i] != set[k])
		{
			k++;
			if (!set[k])
				return (i);
		}
		k = 0;
		i++;
	}
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*tmp;
	size_t	j;
	size_t	k;
	int		s1_size_end;
	int		s1_size_start;

	j = 0;
	k = 0;
	if (s1 == NULL)
		return (NULL);
	if ((char *) set == NULL)
		return ((char *) s1);
	s1_size_start = ft_string_start((char *) s1, (char *) set, k);
	s1_size_end = ft_string_end((char *) s1, (char *) set, s1_size_start);
	tmp = malloc(s1_size_end - s1_size_start + 1 * sizeof(char));
	if (tmp == NULL)
		return (NULL);
	while (s1_size_start < s1_size_end)
	{
		tmp[j] = ((char *) s1)[s1_size_start];
		j++;
		s1_size_start++;
	}
	tmp[j] = 0;
	return ((char *) tmp);
}
