/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:26:22 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/27 16:51:21 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_LIB_H
# define SO_LONG_LIB_H

# include "libft/libft.h"
# include "mlx/mlx.h"
# include "define.h"

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


//init_struc.c
void	init_data(t_data *d);
void	init_img(t_img *i);
int		init_win(t_vars *v, t_data *d);
void	init_textures(a_vars *a);

//check_error.c
int		check_error(int e);

//clean_all.c
int		clean_all(a_vars *a);
void	ft_clean(t_data *d);
void	ft_destroy(t_vars *v);

#endif
