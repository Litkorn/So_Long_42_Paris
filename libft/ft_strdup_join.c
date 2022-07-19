/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_join.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:29:21 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:47:08 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s3;
	int		i;
	int		j;

	len = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = 0;
	j = 0;
	s3 = malloc(sizeof(char) * len);
	if (!s3)
		return (NULL);
	while (s1[i])
	{
		s3[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s3[i + j] = s2[j];
		j++;
	}
	s3[i + j] = '\0';
	return (s3);
}

char	*ft_strdup(const char *s1)
{
	int		i;
	int		n;
	char	*s2;

	i = 0;
	n = ft_strlen(s1) + 1;
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
