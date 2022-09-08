/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:30:48 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/21 13:12:42 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	if (s == NULL)
		return (0);
	while (s[size])
		size++;
	return (size);
}

size_t	ft_tablen(char **s)
{
	size_t	size;

	size = 0;
	if (s == NULL)
		return (0);
	while (s[size] != NULL)
		size++;
	return (size);
}
