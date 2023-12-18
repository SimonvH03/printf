/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spellbook[2].c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:11:55 by simon             #+#    #+#             */
/*   Updated: 2023/12/18 19:29:17 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_sprint(char *str)
{
	if (str == NULL)
		return (write(1, "(null)", 6));
	else
		return (ft_putstr(str));
}

int	ft_pprint(void *p)
{
	if (p == NULL)
		return (write(1, "(nil)", 5));
	else
		return (write(1, "0x", 2) + ft_putpointer((unsigned long)p));
}
