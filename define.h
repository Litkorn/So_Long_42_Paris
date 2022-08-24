/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:37:32 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/24 16:40:37 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFINE_H
# define DEFINE_H

# include "so_long_lib.h"

# define W 119
# define UP 65362
# define S 115
# define DOWN 65364
# define A 97
# define LEFT 65361
# define D 100
# define RIGHT 65363
# define ESC 65307
# define ERR_FILE 1
# define ERR_FD 2
# define ERR_G_MAP 3
# define ERR_CHAR 4
# define ERR_SHAPE 5
# define ERR_WALLS 6
# define ERR_MISS 7
# define ERR_2_MUCH 8
# define ERR_PATH 9
# define ERR_MLX 10
# define ERR_WIN 11
# define err_file "Error\nFile is not recognized.\n"
# define err_fd "Error\nFile descriptor attribution failed.\n"
# define err_g_map "Error\nMap attribution failed.\n"
# define err_char "Error\nMap is not valid: Invalid char in map.\n"
# define err_shape "Error\nMap is not valid: Shape not valid.\n"
# define err_walls "Error\nMap is not valid: Not closed by walls.\n"
# define err_miss "Error\nMap is not valid: Map is missing something.\n"
# define err_2_much "Error\nMap is not valid: Too much exits or player position.\n"
# define err_path "Error\nNo valid path in map.\n"
# define err_mlx "Error\nMlx initialisation failed.\n"
# define err_win "Error\nWindow initialisation failed.\n"

typedef struct s_data
{
	int		pos_x;
	int		pos_y;
	int		img_x;
	int		img_y;
	int		e;
	int		p;
	int		co;
	char	**map;
}				t_data;

typedef struct s_vars
{
	void	*mlx;
	void	*win;
	void	*img;
}				t_vars;

typedef struct s_path
{
	int		c;
	int		p;
	int		e;
	char	**mp;
}				t_path;

# endif
