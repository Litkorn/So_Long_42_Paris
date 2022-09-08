/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:47:28 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:43:16 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	int_txt_2(t_all *a)
{
	a->i.exit_0 = NULL;
	a->i.exit_1 = NULL;
	a->i.exit_2 = NULL;
	a->i.exit_3 = NULL;
	a->i.exit_4 = NULL;
	a->i.wall_c = NULL;
	a->i.ground = NULL;
}

static void	int_txt(t_all *a)
{
	a->i.char_d_1 = NULL;
	a->i.char_d_2 = NULL;
	a->i.char_d_3 = NULL;
	a->i.char_d_4 = NULL;
	a->i.char_l_1 = NULL;
	a->i.char_l_2 = NULL;
	a->i.char_l_3 = NULL;
	a->i.char_l_4 = NULL;
	a->i.char_r_1 = NULL;
	a->i.char_r_2 = NULL;
	a->i.char_r_3 = NULL;
	a->i.char_r_4 = NULL;
	a->i.char_u_1 = NULL;
	a->i.char_u_2 = NULL;
	a->i.char_u_3 = NULL;
	a->i.char_u_4 = NULL;
	a->i.co_1 = NULL;
	a->i.co_2 = NULL;
	a->i.co_3 = NULL;
	a->i.co_4 = NULL;
	a->i.co_5 = NULL;
	a->i.co_6 = NULL;
	a->i.co_7 = NULL;
	a->i.co_8 = NULL;
	int_txt_2(a);
}

void	init_data(t_all *a)
{
	a->v.mlx = NULL;
	a->v.win = NULL;
	a->d.map = NULL;
	a->d.collec_x = NULL;
	a->d.collec_y = NULL;
	a->d.ext_x = 0;
	a->d.ext_y = 0;
	a->d.img_x = 0;
	a->d.img_y = 0;
	a->d.co = 0;
	a->d.co_c = 0;
	a->d.e = 0;
	a->d.p = 0;
	a->d.direction = DOWN;
	a->d.exit = 0;
	a->d.pos_x = 0;
	a->d.pos_y = 0;
	a->d.walk = 0;
	a->d.time = 0;
	int_txt(a);
}

int	init_win(t_vars *v, t_data *d)
{
	v->mlx = mlx_init();
	if (!v->mlx)
		return (4);
	v->win = mlx_new_window(v->mlx, 64 * d->img_x, 64 * d->img_y, "So long...");
	if (!v->win)
		return (5);
	return (0);
}
