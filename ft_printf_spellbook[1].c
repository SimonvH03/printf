/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spellbook[1].c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:11:55 by simon             #+#    #+#             */
/*   Updated: 2023/11/24 00:27:01 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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
