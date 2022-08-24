/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:52:56 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/24 16:39:51 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

int	check_error(int e)
{
	if (e == ERR_FILE)
		ft_printf_err(err_file);
	if (e == ERR_FD)
		ft_printf_err(err_fd);
	if (e == ERR_G_MAP)
		ft_printf_err(err_g_map);
	if (e == ERR_CHAR)
		ft_printf_err(err_char);
	if (e == ERR_SHAPE)
		ft_printf_err(err_shape);
	if (e == ERR_WALLS)
		ft_printf_err(err_walls);
	if (e == ERR_MISS)
		ft_printf_err(err_miss);
	if (e == ERR_2_MUCH)
		ft_printf_err(err_2_much);
	if (e == ERR_PATH)
		ft_printf_err(err_path);
	if (e == ERR_MLX)
		ft_printf_err(err_mlx);
	if (e == ERR_WIN)
		ft_printf_err(err_win);
	return (e);
}
