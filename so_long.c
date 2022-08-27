/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:25:51 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/27 17:37:35 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_lib.h"

int	key_press(int key, a_vars *a)
{
//	(void) a;
	if (key == ESC)
		clean_all(a);
	return (1);
}

int	main(int ac, char **av)
{
	a_vars	a;
	t_vars	v;
	t_data	d;
	t_img	i;

	if (ac < 2)
	{
		av = NULL;
		ft_printf_err("Error\nNeed a map!\n");
		exit (0);
	}
	init_data(&d);
	if (check_error(ft_parsing(av, &d)) != 0
		|| check_error(init_win(&v, &d) != 0))
	{
		if (d.map)
			ft_clean_tab(d.map);
		if (v.win)
			ft_destroy(&v);
		exit(0);
	}
	init_img(&i);
	a.i = i;
	a.d = d;
	a.v = v;
	init_textures(&a);
	mlx_hook(v.win, 02, (1L<<0), key_press, &a);
	mlx_hook(v.win, 17, 0, clean_all, &a);
	mlx_loop(v.mlx);
	exit(0);
}
