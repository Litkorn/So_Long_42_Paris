/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:07:56 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/27 17:35:24 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

static void	dest_text2(a_vars *a)
{
	if (a->i.wall_c)
		mlx_destroy_image(a->v.mlx, a->i.wall_c);
	if (a->i.wall_d)
		mlx_destroy_image(a->v.mlx, a->i.wall_d);
	if (a->i.wall_l)
		mlx_destroy_image(a->v.mlx, a->i.wall_l);
	if (a->i.wall_pyl)
		mlx_destroy_image(a->v.mlx, a->i.wall_pyl);
	if (a->i.wall_r)
		mlx_destroy_image(a->v.mlx, a->i.wall_r);
	if (a->i.wall_u)
		mlx_destroy_image(a->v.mlx, a->i.wall_u);
}

static void	dest_textures(a_vars *a)
{
	if (a->i.char_d)
		mlx_destroy_image(a->v.mlx, a->i.char_d);
	if (a->i.char_l)
		mlx_destroy_image(a->v.mlx, a->i.char_l);
	if (a->i.char_r)
		mlx_destroy_image(a->v.mlx, a->i.char_r);
	if (a->i.char_u)
		mlx_destroy_image(a->v.mlx, a->i.char_u);
	if (a->i.co_1)
		mlx_destroy_image(a->v.mlx, a->i.co_1);
	if (a->i.co_2)
		mlx_destroy_image(a->v.mlx, a->i.co_2);
	if (a->i.co_3)
		mlx_destroy_image(a->v.mlx, a->i.co_3);
	if (a->i.co_4)
		mlx_destroy_image(a->v.mlx, a->i.co_4);
	if (a->i.exit_1)
		mlx_destroy_image(a->v.mlx, a->i.exit_1);
	if (a->i.exit_2)
		mlx_destroy_image(a->v.mlx, a->i.exit_2);
	if (a->i.ground)
		mlx_destroy_image(a->v.mlx, a->i.ground);
	if (a->i.patrol)
		mlx_destroy_image(a->v.mlx, a->i.patrol);
	dest_text2(a);
}

void	ft_destroy(t_vars *v)
{
	mlx_destroy_window(v->mlx, v->win);
	mlx_destroy_display(v->mlx);
	free(v->mlx);
}

int	clean_all(a_vars *a)
{
	if (a->d.map)
		ft_clean_tab(a->d.map);
	dest_textures(a);
	if (a->v.win)
		ft_destroy(&a->v);
	exit(0);
}
