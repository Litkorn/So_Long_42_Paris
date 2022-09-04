/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 15:21:51 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/01 13:36:28 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	check_char(t_path *p, char c)
{
	if (c == 'C')
		p->c++;
	else if (c == 'E')
		p->e++;
}

static int	change(t_path *p, int i, int j)
{
	if (p->mp[i][j] && p->mp[i][j] != '1' && p->mp[i][j] != '3')
	{
		check_char(p, p->mp[i][j]);
		p->mp[i][j] = '3';
		return (1);
	}
	return (0);
}

int	check_around(t_path *p, int i, int j)
{
	int	c;

	c = 0;
	c += change(p, i, j - 1);
	c += change(p, i, j + 1);
	c += change(p, i - 1, j);
	c += change(p, i + 1, j);
	return (c);
}
