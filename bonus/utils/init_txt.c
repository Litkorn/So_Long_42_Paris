/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_txt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:22:45 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:43:43 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

void	init_char(t_all *a)
{
	a->i.char_d_1 = xpm_to_img(a, "txt/char_d_1.xpm");
	a->i.char_d_2 = xpm_to_img(a, "txt/char_d_2.xpm");
	a->i.char_d_3 = xpm_to_img(a, "txt/char_d_3.xpm");
	a->i.char_d_4 = xpm_to_img(a, "txt/char_d_4.xpm");
	a->i.char_l_1 = xpm_to_img(a, "txt/char_l_1.xpm");
	a->i.char_l_2 = xpm_to_img(a, "txt/char_l_2.xpm");
	a->i.char_l_3 = xpm_to_img(a, "txt/char_l_3.xpm");
	a->i.char_l_4 = xpm_to_img(a, "txt/char_l_4.xpm");
	a->i.char_r_1 = xpm_to_img(a, "txt/char_r_1.xpm");
	a->i.char_r_2 = xpm_to_img(a, "txt/char_r_2.xpm");
	a->i.char_r_3 = xpm_to_img(a, "txt/char_r_3.xpm");
	a->i.char_r_4 = xpm_to_img(a, "txt/char_r_4.xpm");
	a->i.char_u_1 = xpm_to_img(a, "txt/char_u_1.xpm");
	a->i.char_u_2 = xpm_to_img(a, "txt/char_u_2.xpm");
	a->i.char_u_3 = xpm_to_img(a, "txt/char_u_3.xpm");
	a->i.char_u_4 = xpm_to_img(a, "txt/char_u_4.xpm");
}

void	init_co(t_all *a)
{
	a->i.co_1 = xpm_to_img(a, "txt/co_1.xpm");
	a->i.co_2 = xpm_to_img(a, "txt/co_2.xpm");
	a->i.co_3 = xpm_to_img(a, "txt/co_3.xpm");
	a->i.co_4 = xpm_to_img(a, "txt/co_4.xpm");
	a->i.co_5 = xpm_to_img(a, "txt/co_5.xpm");
	a->i.co_6 = xpm_to_img(a, "txt/co_6.xpm");
	a->i.co_7 = xpm_to_img(a, "txt/co_7.xpm");
	a->i.co_8 = xpm_to_img(a, "txt/co_8.xpm");
}

void	init_other(t_all *a)
{
	a->i.wall_c = xpm_to_img(a, "txt/wall_c.xpm");
	a->i.exit_0 = xpm_to_img(a, "txt/exit_0.xpm");
	a->i.exit_1 = xpm_to_img(a, "txt/exit_1.xpm");
	a->i.exit_2 = xpm_to_img(a, "txt/exit_2.xpm");
	a->i.exit_3 = xpm_to_img(a, "txt/exit_3.xpm");
	a->i.exit_4 = xpm_to_img(a, "txt/exit_4.xpm");
	a->i.ground = xpm_to_img(a, "txt/ground.xpm");
}

void	init_textures(t_all *a)
{
	init_char(a);
	init_co(a);
	init_other(a);
}
