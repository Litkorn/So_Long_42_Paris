/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:36:43 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:44:20 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

void	dest_char_1(t_all *a)
{
	if (a->i.char_d_1)
		mlx_destroy_image(a->v.mlx, a->i.char_d_1);
	if (a->i.char_d_2)
		mlx_destroy_image(a->v.mlx, a->i.char_d_2);
	if (a->i.char_d_3)
		mlx_destroy_image(a->v.mlx, a->i.char_d_3);
	if (a->i.char_d_4)
		mlx_destroy_image(a->v.mlx, a->i.char_d_4);
	if (a->i.char_l_1)
		mlx_destroy_image(a->v.mlx, a->i.char_l_1);
	if (a->i.char_l_2)
		mlx_destroy_image(a->v.mlx, a->i.char_l_2);
	if (a->i.char_l_3)
		mlx_destroy_image(a->v.mlx, a->i.char_l_3);
	if (a->i.char_l_4)
		mlx_destroy_image(a->v.mlx, a->i.char_l_4);
}

void	dest_char_2(t_all *a)
{
	if (a->i.char_r_1)
		mlx_destroy_image(a->v.mlx, a->i.char_r_1);
	if (a->i.char_r_2)
		mlx_destroy_image(a->v.mlx, a->i.char_r_2);
	if (a->i.char_r_3)
		mlx_destroy_image(a->v.mlx, a->i.char_r_3);
	if (a->i.char_r_4)
		mlx_destroy_image(a->v.mlx, a->i.char_r_4);
	if (a->i.char_u_1)
		mlx_destroy_image(a->v.mlx, a->i.char_u_1);
	if (a->i.char_u_2)
		mlx_destroy_image(a->v.mlx, a->i.char_u_2);
	if (a->i.char_u_3)
		mlx_destroy_image(a->v.mlx, a->i.char_u_3);
	if (a->i.char_u_4)
		mlx_destroy_image(a->v.mlx, a->i.char_u_4);
}

void	dest_co(t_all *a)
{
	if (a->i.co_1)
		mlx_destroy_image(a->v.mlx, a->i.co_1);
	if (a->i.co_2)
		mlx_destroy_image(a->v.mlx, a->i.co_2);
	if (a->i.co_3)
		mlx_destroy_image(a->v.mlx, a->i.co_3);
	if (a->i.co_4)
		mlx_destroy_image(a->v.mlx, a->i.co_4);
	if (a->i.co_5)
		mlx_destroy_image(a->v.mlx, a->i.co_5);
	if (a->i.co_6)
		mlx_destroy_image(a->v.mlx, a->i.co_6);
	if (a->i.co_7)
		mlx_destroy_image(a->v.mlx, a->i.co_7);
	if (a->i.co_8)
		mlx_destroy_image(a->v.mlx, a->i.co_8);
}

void	dest_other(t_all *a)
{
	if (a->i.exit_0)
		mlx_destroy_image(a->v.mlx, a->i.exit_0);
	if (a->i.exit_1)
		mlx_destroy_image(a->v.mlx, a->i.exit_1);
	if (a->i.exit_2)
		mlx_destroy_image(a->v.mlx, a->i.exit_2);
	if (a->i.exit_3)
		mlx_destroy_image(a->v.mlx, a->i.exit_3);
	if (a->i.exit_4)
		mlx_destroy_image(a->v.mlx, a->i.exit_4);
	if (a->i.wall_c)
		mlx_destroy_image(a->v.mlx, a->i.wall_c);
	if (a->i.ground)
		mlx_destroy_image(a->v.mlx, a->i.ground);
}
