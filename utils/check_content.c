/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:33:00 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/26 12:15:49 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

static void	get_content(t_data *d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (d->map[i][j])
	{
		if (d->map[i][j] == 'C')
			d->co++;
		if (d->map[i][j] == 'E')
			d->e++;
		if (d->map[i][j] == 'P')
		{
			d->p++;
			d->pos_x = i;
			d->pos_y = j;
			d->map[i][j] = '0';
		}
		i++;
		if (i == (int)ft_tablen(d->map))
		{
			i = 0;
			j++;
		}
	}
}

int	check_content_map(t_data *d)
{
	get_content(d);
	if (d->p == 0 || d->e == 0 || d->co == 0)
		return (ERR_MISS);
	if (d->p > 1 || d->e > 1)
		return (ERR_2_MUCH);
	return (0);
}
