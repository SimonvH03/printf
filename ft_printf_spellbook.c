/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spellbook.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:11:55 by simon             #+#    #+#             */
/*   Updated: 2023/11/23 23:35:04 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_cprint(char c)
{
	return (ft_putchar(c));
}

int	ft_sprint(char *str)
{
	return (ft_putstr(str));
}

int	ft_idprint(int id)
{
	return (ft_putnbr(id));
}

int	ft_uprint(unsigned int u)
{
	return (ft_putnbr(u));
}

int	ft_xprint(int x)
{
	return (ft_putnbr_base(x, "0123456789abcdef"));
}

int	ft_bigxprint(int x)
{
	return (ft_putnbr_base(x, "0123456789ABCDEF"));
}

int	ft_pprint(void *p)
{
	int	len;

	if (p == NULL)
		return (write(1, "(nil)", 5));
	len = write(1, "0x", 2);
	return (ft_putpointer((unsigned long)p));
}
