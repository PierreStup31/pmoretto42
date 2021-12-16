/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmoretto <pmoretto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 17:02:02 by pmoretto          #+#    #+#             */
/*   Updated: 2021/12/16 11:29:51 by pmoretto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <strings.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <ctype.h>
# include <stdio.h>
# include <stdbool.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;

int		skip_whitespaces(const char *str, int *ptr_i);
int		ft_atoi(const char *str);
void	ft_bzero(void *ptr, size_t len);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp( const void *ptr1, const void *ptr2, size_t len);
void	*ft_memchr( const void *src, int c, size_t len);
void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memset(void *ptr, int c, size_t len);
char	*ft_strchr(const char *s, int c);
size_t	ft_strlcpy(char *dest, const char *src, size_t len);
size_t	ft_strlen(const char *c);
int		ft_strncmp(const char *s1, const char *s2, size_t len);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_strnstr(const char *s1, const char *s2, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t len);
char	*strdup(const char *src);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putendl_fd(char *s, int fd);
char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_itoa(int n);
//BONUS
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
int		ft_lstsize(t_list *lst);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

#endif