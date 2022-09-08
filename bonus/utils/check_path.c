/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_path.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 14:48:19 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:44:49 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	get_pos(t_data *d, t_path *p)
{
	size_t	i;

	i = 0;
	p->c = 0;
	p->e = 0;
	p->mp = NULL;
	p->mp = malloc(sizeof(char *) * (ft_tablen(d->map) + 1));
	if (!p->mp)
	{
		p->mp = NULL;
		return ;
	}
	while (d->map[i] != NULL)
	{
		p->mp[i] = ft_strdup(d->map[i]);
		i++;
	}
	p->mp[i] = NULL;
	p->mp[d->pos_y][d->pos_x] = '3';
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

static int	malloc_collec(t_data *d)
{
	d->collec_x = malloc(sizeof(int) * d->co);
	d->collec_y = malloc(sizeof(int) * d->co);
	if (!d->collec_x || !d->collec_y)
		return (1);
	return (0);
}

static int	get_collectible(t_data *d)
{
	int	x;
	int	y;
	int	o;

	y = 0;
	o = 0;
	if (malloc_collec(d) == 1)
		return (1);
	while (d->map[y])
	{
		x = 0;
		while (d->map[y][x])
		{
			if (d->map[y][x] == 'C')
			{
				d->collec_x[o] = x;
				d->collec_y[o] = y;
				o++;
			}
			x++;
		}
		y++;
	}
	return (0);
}

int	check_path(t_data *d)
{
	t_path	p;

	get_pos(d, &p);
	do_while(&p, 1);
	ft_clean_tab(p.mp);
	if (p.e < 1 || p.c != d->co)
		return (ERR_PATH);
	if (get_collectible(d) == 1)
		return (ERR_MALLOC);
	return (0);
}
