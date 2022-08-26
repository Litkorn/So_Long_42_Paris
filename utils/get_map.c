/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_map.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 17:33:17 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/26 12:49:21 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

static char	*ft_strdup_so_l(const char *s1)
{
	int		i;
	int		n;
	char	*s2;

	i = 0;
	if (s1 != NULL)
	{
		n = ft_strlen(s1);
		s2 = malloc(n * sizeof(char));
		if (!s2)
			return (NULL);
		while (s1[i] != '\n' && s1[i])
		{
			s2[i] = s1[i];
			i++;
		}
		s2[i] = '\0';
		return (s2);
	}
	return (NULL);
}

static int	alloc_map(char *path, t_data *d)
{
	char	*temp;
	int		i;
	int		fd;

	temp = NULL;
	i = 0;
	fd = open(path, O_RDONLY);
	if (fd < 0)
	{
		d->map = NULL;
		return (ERR_FD);
	}
	temp = get_next_line(fd);
	while (temp != NULL)
	{
		free(temp);
		temp = get_next_line(fd);
		i++;
	}
	free(temp);
	close(fd);
	d->map = malloc((sizeof(char *) * (i + 1)));
	return (0);
}

static int	get_part_2(int fd, t_data *d)
{
	size_t	i;
	char	*temp;

	i = 0;
	temp = NULL;
	temp = get_next_line(fd);
	if (!temp)
		return (1);
	d->map[0] = ft_strdup_so_l(temp);
	while (temp != NULL)
	{
		free(temp);
		i++;
		temp = get_next_line(fd);
		d->map[i] = ft_strdup_so_l(temp);
	}
	free(temp);
	d->map[i] = NULL;
	if (i != ft_tablen(d->map))
		return (1);
	return (0);
}

int	get_map(char *path, t_data *d)
{
	int		fd;

	if (alloc_map(path, d) != ERR_FD)
	{
		if (d->map)
		{
			fd = open(path, O_RDONLY);
			if (fd < 0)
				return (ERR_FD);
			if (get_part_2(fd, d) == 1)
			{
				close(fd);
				return (ERR_G_MAP);
			}
			close(fd);
			return (0);
		}
		return (ERR_G_MAP);
	}
	return (ERR_FD);
}
