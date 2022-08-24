/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:21:24 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/21 19:29:06 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

static int	if_rectangle(t_data *d)
{
	int		i;
	int		j;
	size_t	x;

	x = 0;
	j = ft_strlen(d->map[x]);
	while (x < ft_tablen(d->map))
	{
		i = ft_strlen(d->map[x]);
		if (i != j)
			return (6);
		j = i;
		x++;
	}
	return (0);
}

static int	check_char(t_data *d)
{
	size_t	i;
	size_t	j;
	char	c;

	i = 0;
	j = 0;
	while (d->map[i])
	{
		c = d->map[i][j];
		if (c == '1' || c == '0' || c == 'E' || c == 'C' || c == 'P'
			|| c == '\0' || (c == '\n' && j != 0))
			j++;
		else
			break ;
		if (j == ft_strlen(d->map[i]))
		{
			i++;
			j = 0;
		}
	}
	if (d->map[i] != NULL)
		return (5);
	return (0);
}

static int	check_walls(t_data *d)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 0;
	j = 0;
	y = ft_strlen(d->map[0]);
	x = ft_tablen(d->map);
	while (i < x - 1 && d->map[i][0] == '1' && d->map[i][y - 1] == '1')
		i++;
	while (j < y - 1 && d->map[0][j] == '1' && d->map[x - 1][j] == '1')
		j++;
	if (d->map[0][j] != '1' || d->map[x - 1][j] != '1'
		|| d->map[i][0] != '1' || d->map[i][y - 1] != '1')
		return (7);
	return (0);
}

int	parse_map(t_data *d)
{
	if (check_char(d) != 0)
		return (5);
	if (if_rectangle(d) != 0)
		return (6);
	if (check_walls(d) != 0)
		return (7);
	if (check_content_map(d) != 0)
		return (8);
	if (check_path(d) != 0)
		return (9);
	return (0);
}
