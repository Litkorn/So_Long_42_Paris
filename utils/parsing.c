/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:35:13 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/24 15:58:57 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../so_long_lib.h"

/* parsing du nom de fichiers
parsing de la map
-> recup des coordonnes du personnage */

static int	parse_name(char **av)
{
	int	i;

	i = ft_strlen(av[1]);
	if (i >= 5)
	{
		i--;
		if (av[1][i] == 'r' && av[1][i - 1] == 'e' && av[1][i - 2] == 'b'
			&& av[1][i - 3] == '.')
			return (0);
	}
	return (ERR_FILE);
}

int	ft_parsing(char **av, t_data *d)
{
	int	mp;
	int	nm;

	if (parse_name(av) == ERR_FILE)
		return (ERR_FILE);
	mp = get_map(av[1], d);
	if (mp == ERR_FD || mp == ERR_G_MAP)
		return (mp);
	nm = parse_map(d);
	if (nm != 0)
		return (nm);
	return (0);
}
