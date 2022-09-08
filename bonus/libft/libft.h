/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 11:26:17 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/21 17:57:06 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

typedef long long unsigned int	t_llui;

//atoi_itoa.c
int		ft_atoi(const char *str);
char	*ft_itoa(int n);

//calloc_bzero.c
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);

//clean.c
void	*ft_clean_str(char **str);
void	ft_clean_tab(char	**tab);

//ft_is.c
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);

//memmove.c
void	*ft_memmove(void *dst, const void *src, size_t n);

//mems.c
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);

//printf
void	ft_convert_dec(long long int nb, int *len);
int		ft_printf(const char *str, ...);
int		ft_put_char(unsigned char c);
void	ft_put_convert(char c, unsigned int nb, int *len);
void	ft_put_pointer(intptr_t nb, int *len);
void	ft_put_str(char *str, int *len);

//printf_err
void	ft_convert_dec_er(long long int nb, int *len);
int		ft_printf_err(const char *str, ...);
int		ft_put_char_er(unsigned char c);
void	ft_put_convert_er(char c, unsigned int nb, int *len);
void	ft_put_pointer_er(intptr_t nb, int *len);
void	ft_put_str_er(char *str, int *len);

//put_fd.c
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

//ft_split.c
char	**ft_split(const char *s, char c);

//ft_str_ft.c
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));

//strchr_cmp.c
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_substr(const char *s, unsigned int start, size_t len);

//strdup_join.c
char	*ft_strdup(const char *s1);
char	*ft_strjoin(const char *s1, const char *s2);

//strl_cat_cpy.c
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);

//strlen
size_t	ft_strlen(const char *s);
size_t	ft_tablen(char **s);

//strtrim.c
char	*ft_strtrim(const char *s1, const char *set);

//tolow_upper.c
int		ft_toupper(int c);
int		ft_tolower(int c);

//GNL
char	*get_next_line(int fd);
void	*ft_calloc_gnl(size_t count, size_t size);
char	*ft_clean_gnl(char **str);
char	*ft_strdup_gnl(char *s1);
char	*ft_strjoin_gnl(char *str1, const char *str2, int k);
size_t	ft_strlen_gnl(const char *s);

#endif
