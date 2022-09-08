/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mems.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:20:37 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:47:03 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*s2;

	d = (unsigned char) c;
	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s2[i] == d)
			return (&s2[i]);
		i++;
	}
	return (NULL);
}

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*c1;
	unsigned char	*c2;
	size_t			i;

	i = 0;
	c1 = (unsigned char *) s1;
	c2 = (unsigned char *) s2;
	if (n == 0)
		return (0);
	while (c1[i] == c2[i] && i < n - 1)
		i++;
	return (c1[i] - c2[i]);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		m;
	char		*dest2;
	const char	*src2;

	dest2 = (char *) dest;
	src2 = (const char *) src;
	m = 0;
	while (m < n)
	{
		dest2[m] = src2[m];
		m++;
	}
	return (dest);
}

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*s2;
	unsigned char	d;
	size_t			m;

	s2 = (unsigned char *) s;
	d = (unsigned char) c;
	m = 0;
	while (m < n)
	{
		s2[m] = d;
		m++;
	}
	return (s);
}
