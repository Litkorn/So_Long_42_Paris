/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_itoa.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:16:08 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:46:59 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	a;

	i = 0;
	n = 1;
	a = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		a = a * 10 + str[i] - '0';
		i++;
	}
	return (a * n);
}

static int	count_malloc(long int m)
{
	int		count;

	count = 0;
	if (m <= 0)
	{
		count = 1;
		m = -m;
	}
	while (m > 0)
	{
		count ++;
		m /= 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*c;
	int			len;
	long int	m;

	m = n;
	len = count_malloc(m);
	c = malloc(sizeof(char) * len + 1);
	if (!c)
		return (NULL);
	c[len] = 0;
	len--;
	if (m < 0)
	{
		m = -m;
		c[0] = '-';
	}
	if (m == 0)
		c[0] = '0';
	while (m > 0)
	{
		c[len] = m % 10 + '0';
		m /= 10;
		len--;
	}
	return (c);
}
