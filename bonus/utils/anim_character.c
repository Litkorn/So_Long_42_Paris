/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   anim_character.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:49:37 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:39:33 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	char_up(t_all *a)
{
	if (a->d.time == 0 || a->d.time == 32000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_u_1, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 8000 || a->d.time == 40000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_u_2, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 16000 || a->d.time == 48000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_u_3, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 24000 || a->d.time == 56000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_u_4, a->d.pos_x * 64, a->d.pos_y * 64);
}

static void	char_down(t_all *a)
{
	if (a->d.time == 0 || a->d.time == 32000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_d_1, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 8000 || a->d.time == 40000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_d_2, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 16000 || a->d.time == 48000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_d_3, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 24000 || a->d.time == 56000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_d_4, a->d.pos_x * 64, a->d.pos_y * 64);
}

static void	char_left(t_all *a)
{
	if (a->d.time == 0 || a->d.time == 32000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_l_1, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 8000 || a->d.time == 40000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_l_2, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 16000 || a->d.time == 48000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_l_3, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 24000 || a->d.time == 56000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_l_4, a->d.pos_x * 64, a->d.pos_y * 64);
}

static void	char_right(t_all *a)
{
	if (a->d.time == 0 || a->d.time == 32000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_r_1, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 8000 || a->d.time == 40000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_r_2, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 16000 || a->d.time == 48000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_r_3, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.time == 24000 || a->d.time == 56000)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_r_4, a->d.pos_x * 64, a->d.pos_y * 64);
}

void	anim_char(t_all *a)
{
	if (a->d.direction == UP)
		char_up(a);
	if (a->d.direction == DOWN)
		char_down(a);
	if (a->d.direction == LEFT)
		char_left(a);
	if (a->d.direction == RIGHT)
		char_right(a);
}
