/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:47:28 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/04 17:07:06 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

static void	int_txt(t_all *a)
{
	a->i.char_d = NULL;
	a->i.co_1 = NULL;
	a->i.exit_1 = NULL;
	a->i.ground = NULL;
}

void	init_data(t_all *a)
{
	a->v.mlx = NULL;
	a->v.win = NULL;
	a->d.map = NULL;
	a->d.img_x = 0;
	a->d.img_y = 0;
	a->d.co = 0;
	a->d.co_c = 0;
	a->d.e = 0;
	a->d.p = 0;
	a->d.pos_x = 0;
	a->d.pos_y = 0;
	a->d.walk = 0;
	int_txt(a);
}

int	init_win(t_vars *v, t_data *d)
{
	v->mlx = mlx_init();
	if (!v->mlx)
		return (4);
	v->win = mlx_new_window(v->mlx, 64 * d->img_x, 64 * d->img_y, "So long...");
	if (!v->win)
		return (5);
	return (0);
}

static void	*xpm_to_img(t_all *a, char *path)
{
	void	*img;
	int		fd;

	fd = open(path, O_RDONLY);
	if (fd >= 0)
	{
		img = mlx_xpm_file_to_image(a->v.mlx, path, &a->i.x, &a->i.y);
		if (!img)
		{
			ft_printf_err("Error\nFail while loading textures\n");
			clean_all(a);
		}
		close(fd);
		return (img);
	}
	else
		clean_all(a);
	return (0);
}

void	init_textures(t_all *a)
{
	a->i.char_d = xpm_to_img(a, "txt/char_d.xpm");
	a->i.co_1 = xpm_to_img(a, "txt/co_1.xpm");
	a->i.exit_1 = xpm_to_img(a, "txt/exit_1.xpm");
	a->i.ground = xpm_to_img(a, "txt/ground.xpm");
	a->i.wall_c = xpm_to_img(a, "txt/wall_c.xpm");
}
