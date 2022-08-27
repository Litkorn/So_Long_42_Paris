/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:37:32 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/27 15:55:48 by cleibeng         ###   ########.fr       */
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
# define ER_FILE "Error\nFile is not recognized.\n"
# define ER_FD "Error\nFile descriptor attribution failed.\n"
# define ER_G_MAP "Error\nMap attribution failed.\n"
# define ER_CHAR "Error\nMap is not valid: Invalid char in map.\n"
# define ER_SHAPE "Error\nMap is not valid: Shape not valid.\n"
# define ER_WALLS "Error\nMap is not valid: Not closed by walls.\n"
# define ER_MISS "Error\nMap is not valid: Map is missing something.\n"
# define ER_2_MUCH "Error\nMap is not valid: Too much exits or player position.\n"
# define ER_PATH "Error\nNo valid path in map.\n"
# define ER_MLX "Error\nMlx initialisation failed.\n"
# define ER_WIN "Error\nWindow initialisation failed.\n"

typedef struct s_img
{
	int		x;
	int		y;
	void	*char_r;
	void	*char_l;
	void	*char_u;
	void	*char_d;
	void	*co_1;
	void	*co_2;
	void	*co_3;
	void	*co_4;
	void	*exit_1;
	void	*exit_2;
	void	*ground;
	void	*wall_l;
	void	*wall_r;
	void	*wall_u;
	void	*wall_d;
	void	*wall_c;
	void	*wall_pyl;
	void	*patrol;
}				t_img;

typedef struct s_data
{
	int		img_x;
	int		img_y;
	int		pos_x;
	int		pos_y;
	int		e;
	int		p;
	int		co;
	char	**map;
}				t_data;

typedef struct s_vars
{
	void	*mlx;
	void	*win;
}				t_vars;

typedef struct s_path
{
	int		c;
	int		p;
	int		e;
	char	**mp;
}				t_path;

typedef struct a_vars
{
	t_data	d;
	t_vars	v;
	t_img	i;
}				a_vars;
#endif
