/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   define.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 14:37:32 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 16:43:49 by cleibeng         ###   ########.fr       */
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
# define ERR_MALLOC 12
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
# define ER_MALLOC "Error\nMalloc for collectibles failed.\n"



typedef struct s_img
{
	int		x;
	int		y;
	void	*char_d_1;
	void	*char_d_2;
	void	*char_d_3;
	void	*char_d_4;
	void	*char_l_1;
	void	*char_l_2;
	void	*char_l_3;
	void	*char_l_4;
	void	*char_r_1;
	void	*char_r_2;
	void	*char_r_3;
	void	*char_r_4;
	void	*char_u_1;
	void	*char_u_2;
	void	*char_u_3;
	void	*char_u_4;
	void	*co_1;
	void	*co_2;
	void	*co_3;
	void	*co_4;
	void	*co_5;
	void	*co_6;
	void	*co_7;
	void	*co_8;
	void	*exit_0;
	void	*exit_1;
	void	*exit_2;
	void	*exit_3;
	void	*exit_4;
	void	*wall_c;
	void	*ground;
}				t_img;

typedef struct s_data
{
	char	**map;
	int		img_x;
	int		img_y;
	int		pos_x;
	int		pos_y;
	int		ext_y;
	int		ext_x;
	int		e;
	int		p;
	int		co;
	int		co_c;
	int		*collec_x;
	int		*collec_y;
	int		direction;
	int		exit;
	int		walk;
	int		time;
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

typedef struct s_all
{
	t_data	d;
	t_vars	v;
	t_img	i;
}				t_all;
#endif
