/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_putnbr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cleibeng <cleibeng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:24:20 by cleibeng          #+#    #+#             */
/*   Updated: 2022/06/07 16:24:20 by cleibeng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_convert(t_llui nb, char *base, int *len, int len_base)
{
	char	c;

	if (nb / len_base != 0)
		ft_convert(nb / len_base, base, len, len_base);
	c = base[(nb % len_base)];
	write (1, &c, 1);
	(*len)++;
}

void	ft_put_convert(char c, unsigned int nb, int *len)
{
	if (c == 'x')
		ft_convert(nb, "0123456789abcdef", len, 16);
	if (c == 'X')
		ft_convert(nb, "0123456789ABCDEF", len, 16);
	if (c == 'u')
		ft_convert(nb, "0123456789", len, 10);
}

void	ft_put_pointer(intptr_t nb, int *len)
{
	if (nb == 0)
		(*len) += write(1, "(nil)", 5);
	else
	{
		write (1, "0x", 2);
		(*len) = (*len) + 2;
		ft_convert(nb, "0123456789abcdef", len, 16);
	}
}

void	ft_convert_dec(long long int nb, int *len)
{
	char	c;
	char	*base;

	base = "0123456789";
	if (nb < 0)
	{
		write (1, "-", 1);
		(*len)++;
		nb = -nb;
	}
	if (nb / 10 != 0)
		ft_convert_dec(nb / 10, len);
	c = base[(nb % 10)];
	write (1, &c, 1);
	(*len)++;
}
