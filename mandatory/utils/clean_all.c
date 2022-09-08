/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:07:56 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/04 17:07:37 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	dest_textures(t_all *a)
{
	if (a->i.char_d != NULL)
		mlx_destroy_image(a->v.mlx, a->i.char_d);
	if (a->i.co_1)
		mlx_destroy_image(a->v.mlx, a->i.co_1);
	if (a->i.exit_1)
		mlx_destroy_image(a->v.mlx, a->i.exit_1);
	if (a->i.ground)
		mlx_destroy_image(a->v.mlx, a->i.ground);
	if (a->i.wall_c)
		mlx_destroy_image(a->v.mlx, a->i.wall_c);
}

void	ft_destroy(t_vars *v)
{
	mlx_destroy_window(v->mlx, v->win);
	mlx_destroy_display(v->mlx);
	free(v->mlx);
}

int	clean_all(t_all *a)
{
	if (a->d.map)
		ft_clean_tab(a->d.map);
	dest_textures(a);
	if (a->v.win)
		ft_destroy(&a->v);
	exit(0);
}
