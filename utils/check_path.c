/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:48:19 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/24 16:21:02 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

static void	get_pos(t_data *d, t_path *p)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	p->c = 0;
	p->e = 0;
	p->mp = NULL;
	p->mp = d->map;
	while (p->mp[i] != NULL)
	{
		if (p->mp[i][j] == 'P')
		{
			d->pos_x = i;
			d->pos_y = j;
			p->mp[i][j] = '3';
		}
		j++;
		if (j == ft_strlen(p->mp[i]))
		{
			i++;
			j = 0;
		}
	}
}

static void	do_while(t_path *p, int check)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (check)
	{
		check = 0;
		while (p->mp[i])
		{
			j = 0;
			while (p->mp[i][j])
			{
				if (p->mp[i][j] == '3')
				{
					if (check_around(p, i, j))
					check++;
				}
				j++;
			}
			i++;
		}
		do_while(p, check);
	}
}

int	check_path(t_data *d)
{
	t_path	p;

	get_pos(d, &p);
	do_while(&p, 1);
	if (p.e < 1 || p.c != d->co)
		return (ERR_PATH);
	return (0);
}
