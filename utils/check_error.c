/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:52:56 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/20 16:44:08 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

int	check_error(int e)
{
	if (e == 1)
		ft_printf_err("Error\nFile is not recognized.\n");
	if (e == 2)
		ft_printf_err("Error\nFile descriptor attribution failed.\n");
	if (e == 3)
		ft_printf_err("Error\nMap attribution failed.\n");
	if (e == 4)
		ft_printf_err("Error\nWindow initialisation failed.\n");
	if (e == 5)
		ft_printf_err("Error\nMap is not valid: Invalid char in map.\n");
	if (e == 6)
		ft_printf_err("Error\nMap is not valid: Shape not valid.\n");
	if (e == 7)
		ft_printf_err("Error\nMap is not valid: Not closed by walls.\n");
	if (e == 8)
		ft_printf_err("Error\nMap is not valid: Map is missing something.\n");
	if (e == 9)
		ft_printf_err("Error\nNo valid path in map.\n");
	if (e == 10)
		ft_printf_err("Error\nMlx initialisation failed.\n");
	return (e);
}
