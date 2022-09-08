/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_err_putstrchar.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:24:11 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:24:11 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_put_char_er(unsigned char c)
{
	write(2, &c, 1);
	return (1);
}

void	ft_put_str_er(char *str, int *len)
{
	if (!str)
		(*len) = (*len) + write(2, "(null)", 6);
	else
		(*len) = (*len) + write(2, str, ft_strlen(str));
}
