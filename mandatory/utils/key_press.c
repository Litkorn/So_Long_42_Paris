/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:12:02 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/04 16:58:04 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	you_win(t_all *a, int x, int y)
{
	a->d.pos_x += x;
	a->d.pos_y += y;
	a->d.walk++;
	ft_printf("Nb of step = %d\n", a->d.walk);
	ft_printf("YOU WON !!");
	clean_all(a);
}

static void	print_move(t_all *a, int x, int y)
{
	mlx_put_image_to_window(a->v.mlx, a->v.win,
		a->i.ground, (a->d.pos_x - x) * 64, (a->d.pos_y - y) * 64);
	mlx_put_image_to_window(a->v.mlx, a->v.win,
		a->i.char_d, a->d.pos_x * 64, a->d.pos_y * 64);
}

void	check_and_move(t_all *a, int x, int y)
{
	if (a->d.map[a->d.pos_y + y][a->d.pos_x + x] == 'C')
	{
		a->d.map[a->d.pos_y + y][a->d.pos_x + x] = '0';
		a->d.co_c ++;
	}
	else if (a->d.map[a->d.pos_y + y][a->d.pos_x + x] == 'E')
	{
		if (a->d.co_c != a->d.co)
			return ;
		else
			you_win(a, x, y);
	}
	else if (a->d.map[a->d.pos_y + y][a->d.pos_x + x] == '1')
		return ;
	a->d.pos_x += x;
	a->d.pos_y += y;
	a->d.walk++;
	print_move(a, x, y);
	ft_printf("Nb of step = %d\n", a->d.walk);
}

void	move(int mv, t_all *a)
{
	if (mv == UP)
		check_and_move(a, 0, -1);
	else if (mv == DOWN)
		check_and_move(a, 0, 1);
	else if (mv == LEFT)
		check_and_move(a, -1, 0);
	else if (mv == RIGHT)
		check_and_move(a, 1, 0);
}

int	key_press(int key, t_all *a)
{
	if (key == ESC)
		clean_all(a);
	if (key == UP)
		move(UP, a);
	if (key == DOWN)
		move(DOWN, a);
	if (key == LEFT)
		move(LEFT, a);
	if (key == RIGHT)
		move(RIGHT, a);
	return (1);
}
