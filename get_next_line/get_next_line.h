/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 13:16:23 by pierremoret       #+#    #+#             */
/*   Updated: 2022/02/04 17:54:36 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stddef.h>
# include <stdio.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct s_line
{
	int		fd;
	int		max_line;
	int		pos;
	char	str[BUFFER_SIZE];
}	t_readline;

char	*get_next_line(int fd);
char	*ft_strjoin(const char *s1, const char s2);
char	ft_check_line(t_readline *tab);
int		ft_strlen(const char *c);
int		ft_initialisation(t_readline *tab, int fd);

#endif