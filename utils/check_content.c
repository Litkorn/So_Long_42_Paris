/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:33:00 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/20 16:47:53 by cleibeng         ###   ########.fr       */
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
		}
		i++;
		if (i == (int)ft_strlen(d->map[0]))
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
		return (8);
	return (0);
}
