/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:33:17 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/20 17:28:31 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

static void	alloc_map(char *path, t_data *d)
{
	char	*temp;
	int		i;
	int		fd;

	temp = NULL;
	i = 0;
	fd = open(path, O_RDONLY);
	temp = get_next_line(fd);
	while (temp != NULL)
	{
		free(temp);
		temp = get_next_line(fd);
		i++;
	}
	free(temp);
	close(fd);
	d->map = malloc((sizeof(char *) * i) + 1);
}

int	get_map(char *path, t_data *d)
{
	char	*temp;
	int		fd;
	int		i;

	temp = NULL;
	i = 0;
	alloc_map(path, d);
	if (d->map)
	{
		fd = open(path, O_RDONLY);
		if (fd < 0)
			return (2);
		temp = get_next_line(fd);
		d->map[0] = temp;
		while (temp)
		{
			free(temp);
			i++;
			temp = get_next_line(fd);
			d->map[i] = temp;
		}
		free(temp);
		d->map[i] = NULL;
		close(fd);
		return (0);
	}
	return (3);
}
