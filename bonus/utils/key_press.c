/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_press.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:12:02 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:47:49 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

void	check_and_move(t_all *a, int x, int y)
{
	if (a->d.map[a->d.pos_y + y][a->d.pos_x + x] == 'C')
	{
		a->d.map[a->d.pos_y + y][a->d.pos_x + x] = '0';
		a->d.co_c ++;
		if (a->d.co_c == a->d.co)
			a->d.exit = 1;
	}
	else if (a->d.map[a->d.pos_y + y][a->d.pos_x + x] == 'E')
	{
		if (a->d.exit == 0)
			return ;
		else
		{
			print_step(a);
			you_win(a, x, y);
		}
	}
	else if (a->d.map[a->d.pos_y + y][a->d.pos_x + x] == '1')
		return ;
	a->d.pos_x += x;
	a->d.pos_y += y;
	a->d.walk++;
	print_move(a, x, y);
	print_step(a);
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
	{
		a->d.direction = UP;
		move(UP, a);
	}
	if (key == DOWN)
	{
		a->d.direction = DOWN;
		move(DOWN, a);
	}
	if (key == LEFT)
	{
		a->d.direction = LEFT;
		move(LEFT, a);
	}
	if (key == RIGHT)
	{
		a->d.direction = RIGHT;
		move(RIGHT, a);
	}
	return (1);
}
