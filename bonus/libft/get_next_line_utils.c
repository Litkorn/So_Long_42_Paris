/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:22:34 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/14 18:04:48 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc_gnl(size_t count, size_t size)
{
	char	*str;
	void	*str2;
	size_t	nb;

	nb = 0;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	while (nb < count * size)
	{
		str[nb] = '\0';
		nb++;
	}
	str2 = (void *) str;
	return (str2);
}

size_t	ft_strlen_gnl(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}

char	*ft_strjoin_gnl(char *str_static, const char *bufread, int k)
{
	char	*str3;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str3 = malloc(sizeof(char)
			* (ft_strlen_gnl(str_static) + ft_strlen_gnl(bufread) + 1));
	if (!str3)
		return (ft_clean_gnl(&str3));
	while (str_static[i])
	{
		str3[i] = str_static[i];
		i++;
	}
	while (bufread[j] && j < k)
	{
		str3[i + j] = bufread[j];
		j++;
	}
	str3[i + j] = '\0';
	free(str_static);
	return (str3);
}

char	*ft_strdup_gnl(char *s1)
{
	int		i;
	int		n;
	char	*s2;

	i = 0;
	n = ft_strlen_gnl(s1) + 1;
	s2 = malloc(n * sizeof(char));
	if (!s2)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

char	*ft_clean_gnl(char **str)
{
	free(*str);
	(*str) = NULL;
	return (NULL);
}
