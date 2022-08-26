/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:25:51 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/26 17:54:50 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib.h"

static int	init_win(t_vars *v, t_data *d)
{
	v->mlx = NULL;
	v->win = NULL;
	v->mlx = mlx_init();
	if (!v->mlx)
		return (4);
	v->win = mlx_new_window(v->mlx, 64 * d->img_x, 64 * d->img_y, "So long...");
	if (!v->win)
		return (5);
	return (0);
}

static int	clean_all(a_vars *a)
{
	printf("debut\n");
	if (a->d.map[1] != NULL)
		ft_clean(&a->d);
	if (a->v.win)
		ft_destroy(&a->v);//destroy img, win puis display)
	printf("fin\n");
	exit(0);
}

static void	init_data(t_data *d)
{
	d->map = NULL;
	d->img_x = 0;
	d->img_y = 0;
	d->co = 0;
	d->e = 0;
	d->p = 0;
	d->pos_x = 0;
	d->pos_y = 0;
}
int	key_press(int key, a_vars *a)
{
	if (key == ESC)
		clean_all(a);
	return (1);
}

int	main(int ac, char **av)
{
	a_vars	a;
	t_vars	v;
	t_data	d;

	init_data(&d);
	if (ac < 2)
	{
		av = NULL;
		ft_printf_err("Error\nNeed a map!\n");
		exit (0);
	}
	if (check_error(ft_parsing(av, &d)) != 0
		|| check_error(init_win(&v, &d) != 0))
	{
		clean_all(&a);
		exit(0);
	}
	a.d = d;
	a.v = v;
	v.img = mlx_xpm_file_to_image(&a, "../test.xpm", &d.img_x, &d.img_y);
	mlx_put_image_to_window(&a, v.win, v.img, 2, 2);
	mlx_hook(v.win, 02, (1L<<0), key_press, &a);
	mlx_hook(v.win, 17, 0, clean_all, &a);
	mlx_loop(v.mlx);
	exit(0);
}
