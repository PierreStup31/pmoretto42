/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:02 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/03 15:31:35 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdlib.h>
# include <unistd.h>

void *ft_memset( void * ptr, int val, size_t len);
void ft_bzero(void *ptr, size_t len);
size_t	ft_strlen(const char *c);
void *ft_memcpy(void *dest, const void *src, size_t count);
void *ft_memmove(void *dest, const void *src, size_t count);
