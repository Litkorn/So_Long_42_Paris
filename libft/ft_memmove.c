/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:19:55 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:47:03 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_move_first(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;
	size_t		s;

	dst2 = (char *) dst;
	src2 = (const char *) src;
	s = 0;
	while (s < n)
	{
		dst2[s] = src2[s];
		s++;
	}
	return (dst);
}

static void	*ft_move_end(void *dst, const void *src, size_t n)
{
	char		*dst2;
	const char	*src2;

	dst2 = (char *) dst;
	src2 = (const char *) src;
	while (n > 0)
	{
		n--;
		dst2[n] = src2[n];
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (src >= dst)
	{
		return (ft_move_first(dst, src, n));
	}
	else
	{
		return (ft_move_end(dst, src, n));
	}
}
