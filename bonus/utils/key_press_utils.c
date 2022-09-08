/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 16:13:51 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:20:52 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

void	you_win(t_all *a, int x, int y)
{
	a->d.pos_x += x;
	a->d.pos_y += y;
	a->d.walk++;
	ft_printf("Nb of step = %d\n", a->d.walk);
	ft_printf("YOU WON !!");
	clean_all(a);
}

void	print_move(t_all *a, int x, int y)
{
	mlx_put_image_to_window(a->v.mlx, a->v.win,
		a->i.ground, (a->d.pos_x - x) * 64, (a->d.pos_y - y) * 64);
	if (a->d.direction == DOWN)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_d_1, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.direction == UP)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_u_1, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.direction == LEFT)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_l_1, a->d.pos_x * 64, a->d.pos_y * 64);
	if (a->d.direction == RIGHT)
		mlx_put_image_to_window(a->v.mlx, a->v.win,
			a->i.char_r_1, a->d.pos_x * 64, a->d.pos_y * 64);
}

void	print_step(t_all *a)
{
	char	*count;

	count = NULL;
	count = ft_itoa(a->d.walk);
	ft_printf("Nb of step = %d\n", a->d.walk);
	mlx_put_image_to_window(a->v.mlx, a->v.win, a->i.wall_c, 0, 0);
	mlx_string_put(a->v.mlx, a->v.win, 15, 35, 0xe6e6fa, "Steps:");
	mlx_string_put(a->v.mlx, a->v.win, 15, 45, 0xe6e6fa, count);
	free(count);
}
