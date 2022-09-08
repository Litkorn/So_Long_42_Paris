/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 15:20:34 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/07 15:24:33 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

void	*xpm_to_img(t_all *a, char *path)
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
