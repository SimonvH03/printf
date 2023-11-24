/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spellbook[1].c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:11:55 by simon             #+#    #+#             */
/*   Updated: 2023/11/24 18:01:24 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_cprint(char c)
{
	return (ft_putchar(c));
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
