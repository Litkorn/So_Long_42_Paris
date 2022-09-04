/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:25:51 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/01 14:50:23 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	check_er(char **av, t_all *a)
{
	if (check_error(ft_parsing(av, &a->d)) != 0
		|| check_error(init_win(&a->v, &a->d) != 0))
	{
		if (a->d.map)
			ft_clean_tab(a->d.map);
		if (a->v.win)
			ft_destroy(&a->v);
		exit(15);
	}
}

int	main(int ac, char **av)
{
	t_all	a;

	if (ac < 2 || ac > 2)
	{
		ft_printf_err("Error\nInvalid number of arguments\n");
		exit (0);
	}
	init_data(&a);
	check_er(av, &a);
	init_textures(&a);
	print_map(&a);
	mlx_hook(a.v.win, 02, (1L << 0), key_press, &a);
	mlx_hook(a.v.win, 17, 0, clean_all, &a);
	mlx_loop(a.v.mlx);
	return (0);
}
