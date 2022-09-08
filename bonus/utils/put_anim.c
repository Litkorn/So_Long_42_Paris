/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_anim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:04:12 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:30:33 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	anim_co_2(t_all *a, int i)
{
	if (a->d.time == 32000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_5,
			a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
	else if (a->d.time == 40000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_6,
			a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
	else if (a->d.time == 48000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_7,
			a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
	else if (a->d.time == 56000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_8,
			a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
}

static void	anim_co(t_all *a)
{
	int	i;

	i = 0;
	while (i < a->d.co)
	{
		if (a->d.map[a->d.collec_y[i]][a->d.collec_x[i]] == 'C')
		{
			if (a->d.time == 0)
				mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_1,
					a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
			else if (a->d.time == 8000)
				mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_2,
					a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
			else if (a->d.time == 16000)
				mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_3,
					a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
			else if (a->d.time == 24000)
				mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.co_4,
					a->d.collec_x[i] * 64, a->d.collec_y[i] * 64);
			else
				anim_co_2(a, i);
		}
		i++;
	}
}

static void	anim_exit(t_all *a)
{
	if (a->d.time == 0 || a->d.time == 32000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.exit_1,
			a->d.ext_x * 64, a->d.ext_y * 64);
	if (a->d.time == 8000 || a->d.time == 40000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.exit_2,
			a->d.ext_x * 64, a->d.ext_y * 64);
	if (a->d.time == 16000 || a->d.time == 48000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.exit_3,
			a->d.ext_x * 64, a->d.ext_y * 64);
	if (a->d.time == 24000 || a->d.time == 56000)
		mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.exit_4,
			a->d.ext_x * 64, a->d.ext_y * 64);
}

int	put_anim(t_all *a)
{
	a->d.time++;
	if (a->d.time % 8000 == 0)
	{
		anim_char(a);
		anim_co(a);
		if (a->d.exit == 1)
			anim_exit(a);
	}
	if (a->d.time >= 56000)
		a->d.time = -8000;
	return (0);
}
