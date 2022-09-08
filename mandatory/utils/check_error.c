/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:52:56 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/01 13:36:24 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_lib.h"

int	check_error(int e)
{
	if (e == ERR_FILE)
		ft_printf_err(ER_FILE);
	if (e == ERR_FD)
		ft_printf_err(ER_FD);
	if (e == ERR_G_MAP)
		ft_printf_err(ER_G_MAP);
	if (e == ERR_CHAR)
		ft_printf_err(ER_CHAR);
	if (e == ERR_SHAPE)
		ft_printf_err(ER_SHAPE);
	if (e == ERR_WALLS)
		ft_printf_err(ER_WALLS);
	if (e == ERR_MISS)
		ft_printf_err(ER_MISS);
	if (e == ERR_2_MUCH)
		ft_printf_err(ER_2_MUCH);
	if (e == ERR_PATH)
		ft_printf_err(ER_PATH);
	if (e == ERR_MLX)
		ft_printf_err(ER_MLX);
	if (e == ERR_WIN)
		ft_printf_err(ER_WIN);
	return (e);
}
