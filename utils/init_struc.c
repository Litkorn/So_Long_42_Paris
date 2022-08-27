/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_struc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 14:47:28 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/27 17:36:04 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

void	init_data(t_data *d)
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

int	init_win(t_vars *v, t_data *d)
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

void	init_img(t_img *i)
{
	i->char_d = NULL;
	i->char_l = NULL;
	i->char_r = NULL;
	i->char_u = NULL;
	i->co_1 = NULL;
	i->co_2 = NULL;
	i->co_3 = NULL;
	i->exit_1 = NULL;
	i->exit_2 = NULL;
	i->ground = NULL;
	i->patrol = NULL;
	i->wall_c = NULL;
	i->wall_d = NULL;
	i->wall_l = NULL;
	i->wall_pyl = NULL;
	i->wall_r = NULL;
	i->wall_u = NULL;

}
static void	*xpm_to_img(a_vars *a, char *path)
{
	void	*img;

	img = mlx_xpm_file_to_image(a->v.mlx, path, &a->i.x, &a->i.y);
	if (!img)
	{
		ft_printf_err("Error\nFail while loading textures\n");
		clean_all(a);
	}
	return (img);
}

void	init_textures(a_vars *a)
{
	a->i.char_r = xpm_to_img(a, "txt/char_r.xpm");
	a->i.char_d = xpm_to_img(a, "txt/char_d.xpm");
	a->i.char_l = xpm_to_img(a, "txt/char_l.xpm");
	a->i.char_u = xpm_to_img(a, "txt/char_u.xpm");
	a->i.co_1 = xpm_to_img(a, "txt/co_1.xpm");
	a->i.co_2 = xpm_to_img(a, "txt/co_2.xpm");
	a->i.co_3 = xpm_to_img(a, "txt/co_3.xpm");
	a->i.co_4 = xpm_to_img(a, "txt/co_4.xpm");
	a->i.exit_1 = xpm_to_img(a, "txt/exit_1.xpm");
	a->i.exit_2 = xpm_to_img(a, "txt/exit_2.xpm");
	a->i.ground = xpm_to_img(a, "txt/ground.xpm");
	a->i.patrol = xpm_to_img(a, "txt/patrol.xpm");
	a->i.wall_c = xpm_to_img(a, "txt/wall_c.xpm");
	a->i.wall_d = xpm_to_img(a, "txt/wall_d.xpm");
	a->i.wall_l = xpm_to_img(a, "txt/wall_l.xpm");
	a->i.wall_pyl = xpm_to_img(a, "txt/wall_pyl.xpm");
	a->i.wall_r = xpm_to_img(a, "txt/wall_r.xpm");
	a->i.wall_u = xpm_to_img(a, "txt/wall_u.xpm");
}
