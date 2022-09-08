/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_cmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:27:43 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:47:07 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*s2;
	int		i;
	char	d;

	s2 = (char *) s;
	d = (char) c;
	i = 0;
	if (d == '\0')
	{
		while (s2[i])
			i++;
		return (&s2[i]);
	}
	while (s2[i] && s2[i] != d)
		i++;
	if (s2[i] == d)
		return (&s2[i]);
	return (NULL);
}

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	d;
	char	*s2;

	s2 = (char *) s;
	d = (char) c;
	i = ft_strlen(s2);
	if (!s2)
		return (NULL);
	if (d == 0)
		return (&s2[ft_strlen(s2)]);
	while (i >= 0 && d != s2[i])
		i--;
	if (i >= 0 && s2[i] == d)
		return (&s2[i]);
	return (NULL);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*hay;
	size_t	h;
	size_t	n;

	hay = (char *) haystack;
	if (needle[0] == 0)
		return ((char *)haystack);
	h = 0;
	while (hay[h] && h < len)
	{
		n = 0;
		if (hay[h] != needle[n])
			h++;
		if (hay[h + n] == needle[n])
		{
			while (hay[h + n] == needle[n] && h + n < len)
				n++;
			if (needle[n] == 0)
				return (&hay[h]);
			h++;
		}
	}
	return (NULL);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	void	*s1;
	size_t	i;

	i = 0;
	if (ft_strlen(s) < start)
	{
		s1 = ft_calloc(1, sizeof('\0'));
		if (!s1)
			return (NULL);
		return (s1);
	}
	s2 = malloc(sizeof(char) * len + 1);
	if (!s2)
		return (NULL);
	while (s[start] && i < len)
	{
		s2[i] = s[start];
		i++;
		start++;
	}
	s2[i] = '\0';
	return (s2);
}

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
