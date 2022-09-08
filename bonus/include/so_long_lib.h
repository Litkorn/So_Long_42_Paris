/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_lib.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 04:26:22 by cleibeng          #+#    #+#             */
/*   Updated: 2022/09/08 15:52:05 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_LIB_H
# define SO_LONG_LIB_H

# include "../libft/libft.h"
# include "../mlx/mlx.h"
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

//init_txt.c
void	init_textures(t_all *a);

//init_struc.c
void	init_data(t_all *a);
int		init_win(t_vars *v, t_data *d);

//init_utils.c
void	*xpm_to_img(t_all *a, char *path);

//check_error.c
int		check_error(int e);

//print_map.c
void	print_map(t_all *a);

//key_press.c
int		key_press(int key, t_all *a);

//key_press_utils.c
void	print_move(t_all *a, int x, int y);
void	you_win(t_all *a, int x, int y);
void	print_step(t_all *a);

//put_anim.c
int		put_anim(t_all *a);

//anim_character.c

void	anim_char(t_all *a);

//clean_all.c
int		clean_all(t_all *a);
void	ft_clean(t_data *d);
void	ft_destroy(t_vars *v);

//clean_utils.c
void	dest_char_1(t_all *a);
void	dest_char_2(t_all *a);
void	dest_co(t_all *a);
void	dest_other(t_all *a);

#endif
