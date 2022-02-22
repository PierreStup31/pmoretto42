/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:12:42 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/04 17:54:15 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static t_readline	tab = {.fd = -1};
	char				s2;
	char				buffer[BUFFER_SIZE + 1];
	char *str;
	
	
	if (fd != tab.fd)
	{
		ft_initialisation(&tab, fd);
		if (!ft_initialisation)
		{
			return (0);
		}
	}
	s2 = ft_check_line(&tab);
	while (s2)
	{
		str[BUFFER_SIZE] = ft_strjoin(str, s2);
		if (s2 == '\n')
			return (str);
		s2 = ft_check_line(&tab);
	}
	return (str);
}
