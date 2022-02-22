/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:16:00 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/04 17:21:00 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_initialisation(t_readline *tab, int fd)
{
	tab->fd = fd;
	tab->pos = 0;
	tab->max_line = read(tab->fd, tab->str, BUFFER_SIZE);
	if (tab->max_line <= 0)
		return (0);
	else
		return (1);
}

char	ft_check_line(t_readline *tab)
{
	char	result;

	if (tab->max_line <= tab->pos)
	{
		tab->pos = 0;
		tab->max_line = read(tab->fd, tab->str, BUFFER_SIZE);
		if (tab->max_line <= 0)
			return (0);
	}
	result = tab->str[tab->pos];
	tab->pos++;
	return (result);
}

char	*ft_strjoin(const char *s1, const char s2)
{
	char	*dest;
	int		i;
	int		len;

	i = 0;
	len = strlen(s1);
	dest = malloc(len + 2);
	if (!s1)
		return (0);
	while (i < len) /* peut etre (i <= len) */
		dest[i++] = *s1++;
	dest[i] = s2;
	dest[i + 1] = 0;
	if (s1)
		free(s1);
	return (dest);
}
