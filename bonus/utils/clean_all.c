/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:07:56 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 14:26:30 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	dest_textures(t_all *a)
{
	dest_char_1(a);
	dest_char_2(a);
	dest_co(a);
	dest_other(a);
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
	if (a->d.collec_x)
		free(a->d.collec_x);
	if (a->d.collec_y)
		free(a->d.collec_y);
	dest_textures(a);
	if (a->v.win)
		ft_destroy(&a->v);
	exit(0);
}
