/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 11:07:56 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/27 13:26:37 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

/*static void	dest_textures(v)
{

}*/

void	ft_clean(t_data *d)
{
	ft_clean_tab(d->map);
}

void	ft_destroy(t_vars *v)
{
	mlx_destroy_window(v->mlx, v->win);
	mlx_destroy_display(v->mlx);
}
