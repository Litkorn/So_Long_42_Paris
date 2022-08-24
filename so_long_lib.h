/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:26:22 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/21 18:24:47 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_LIB_H
# define SO_LONG_LIB_H

# include "libft/libft.h"
# include "mlx/mlx.h"

# define W 119
# define UP 65362
# define S 115
# define DOWN 65364
# define A 97
# define LEFT 65361
# define D 100
# define RIGHT 65363
# define ESC 65307

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

//parsing.c
int		ft_parsing(char **av, t_data *d);
//get_map.c
int		get_map(char *path, t_data *d);
//parse_map.c
int		parse_map(t_data *d);
//check_content.c
int		check_content_map(t_data *d);
//check_paths.c
int		check_path(t_data *d);
//check_paths_utils.c
int		check_around(t_path *p, int i, int j);

//check_error.c
int		check_error(int e);

//clean_all.c
void	ft_clean(t_data *d);
void	ft_destroy(t_vars *v);

#endif
