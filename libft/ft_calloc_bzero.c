/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_bzero.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:16:58 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:47:00 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
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

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*s2;
	size_t			m;

	m = 0;
	s2 = (unsigned char *) s;
	while (m < n)
	{
		s2[m] = '\0';
		m++;
	}
}
