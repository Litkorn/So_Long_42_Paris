/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 18:02:10 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/01 13:37:01 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	textures(t_all *a, char c, int x, int y)
{
	if (c == '1')
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.wall_c, x * 64, y * 64);
	else if (c == '0')
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.ground, x * 64, y * 64);
	else if (c == 'C')
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.co_1, x * 64, y * 64);
	else if (c == 'E')
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.exit_1, x * 64, y * 64);
}

void	print_map(t_all *a)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (a->d.map[y])
	{
		x = 0;
		while (a->d.map[y][x])
		{
			textures(a, a->d.map[y][x], x, y);
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(a->v.mlx, a->v.win,
		a->i.char_d, a->d.pos_x * 64, a->d.pos_y * 64);
}
