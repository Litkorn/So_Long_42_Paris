/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:35:13 by cleibeng          #+#    #+#             */
/*   Updated: 2022/08/19 11:50:45 by cleibeng         ###   ########.fr       */
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
	return (1);
}

/*static int parse_path(t_data *d)
{

}
doit verifier si un path est possible ( et donc savoir si tous les collectibles
sont
recoltables sur le chemin )

*/

int	ft_parsing(char **av, t_data *d)
{
	int	mp;
	int	nm;

	if (parse_name(av) == 1)
		return (1);
	mp = get_map(av[1], d);
	if (mp == 3 || mp == 2)
		return (mp);
	nm = parse_map(d);
	if (nm != 0)
		return (nm);
	/*if parse_path
	*/
	return (0);
}
