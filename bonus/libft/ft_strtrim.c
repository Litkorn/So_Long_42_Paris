/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:31:52 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:47:10 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_start(const char *s1, const char *set)
{
	int		i;
	int		j;
	size_t	count;

	i = 0;
	j = 0;
	count = 0;
	while (set[i] && s1[j])
	{
		if (s1[j] == set[i])
		{
			count++;
			j++;
			i = 0;
		}
		else
			i++;
	}
	return (count);
}

static size_t	count_end(const char *s1, const char *set)
{
	int		i;
	int		j;
	size_t	count;

	i = 0;
	j = ft_strlen(s1) - 1;
	count = 0;
	while (set[i] && j > 0)
	{
		if (s1[j] == set[i])
		{
			count++;
			j--;
			i = 0;
		}
		else
			i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	max;
	size_t	i;
	char	*s2;

	i = count_start(s1, set);
	max = ft_strlen(s1) - count_start(s1, set) - count_end(s1, set) + 1;
	if (count_start(s1, set) >= ft_strlen(s1))
		return (ft_strdup(""));
	s2 = malloc(sizeof(char) * max);
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s1 + i, max);
	return (s2);
}
