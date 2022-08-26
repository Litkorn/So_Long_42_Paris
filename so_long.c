/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:25:51 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/26 12:50:39 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib.h"

static int	init_win(t_vars *v, t_data *d)
{
	v->mlx = NULL;
	v->win = NULL;
	d->img_x = 0;
	/*v->mlx = mlx_init();
	if (!v->mlx)
		return (4);
	v->win = mlx_new_window(v->mlx, 64 * d->img_x, 64 * d->img_y, "So long...");
	if (!v->win)
		return (5);*/
	return (0);
}

static int	clean_all(t_vars *v, t_data *d)
{
	if (d->map)
		ft_clean(d);//toutes les tab a free);
	if (v->win)
		ft_destroy(v);//destroy img, win puis display)
	exit(0);
}

static void	init_data(t_data *d)
{
	d->map = NULL;
	d->img_x = 20;
	d->img_y = 20;
	d->co = 0;
	d->e = 0;
	d->p = 0;
	d->pos_x = 0;
	d->pos_y = 0;
}
/*int	key_press(int key, t_vars *v)
{
	return (1);
}*/

//ft_error a faire

int	main(int ac, char **av)
{
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
		clean_all(&v, &d);
		exit(0);
	}
	clean_all(&v, &d);
	//mlx_hook(v.win, 02, (1L<<0), key_press, &v);
	/*mlx_hook(v.win, 17, 0, clean_all, &v);
	mlx_loop(v.mlx);*/
	exit(0);
}
