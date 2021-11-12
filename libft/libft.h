/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:02 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/12 17:16:23 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int	skip_whitespaces(const char *str, int *ptr_i);
int	ft_atoi(const char *str);
void ft_bzero(void * ptr, size_t len);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
int ft_memcmp( const void * ptr1, const void * ptr2, size_t len);
void * ft_memchr( const void * s, int c, size_t len);
void * ft_memcpy(void *dest, const void *src, size_t len);
void * ft_memmove(void *dest, const void *src, size_t count);
void * ft_memset( void *ptr, int c, size_t len);
char * ft_strchr(const char *s, int c);
size_t ft_strlcpy(char *dest, const char *src, size_t len);
size_t ft_strlen(const char *c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char * ft_strnstr(const char *s1, const char *s2, size_t len);
char * ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
char * ft_strnstr(const char *s1, const char *s2, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t len);
size_t  ft_strlcat(char *dest, const char *src, size_t len);
char    *strdup(const char * src);

#endif








