/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pierremoretton <pierremoretton@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:02 by pmoretto          #+#    #+#             */
/*   Updated: 2021/11/17 14:43:58 by pierremoret      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int skip_whitespaces(const char *str, int *ptr_i);
int ft_atoi(const char *str);
void    ft_bzero(void *ptr, size_t len);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
int ft_memcmp( const void *ptr1, const void *ptr2, size_t len);
void    *ft_memchr( const void *src, int c, size_t len);
void    *ft_memcpy(void *dest, const void *src, size_t len);
void    *ft_memmove(void *dest, const void *src, size_t len);
void    *ft_memset(void *ptr, int c, size_t len);
char    *ft_strchr(const char *s, int c);
size_t  ft_strlcpy(char *dest, const char *src, size_t len);
size_t  ft_strlen(const char *c);
int ft_strncmp(char *s1, char *s2, unsigned int len);
char    *ft_strnstr(const char *s1, const char *s2, size_t len);
char    *ft_strrchr(const char *s, int c);
int ft_tolower(int c);
int ft_toupper(int c);
char    *ft_strnstr(const char *s1, const char *s2, size_t len);
size_t  ft_strlcpy(char *dest, const char *src, size_t len);
size_t  ft_strlcat(char *dest, const char *src, size_t len);
char    *strdup(const char *src);
void    *ft_calloc(size_t count, size_t size);

void    ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putendl_fd(char *s, int fd);
char    *ft_strjoin(const char *str1, const char *str2);

#endif








