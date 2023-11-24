/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_spellbook[2].c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:11:55 by simon             #+#    #+#             */
/*   Updated: 2023/11/24 00:26:53 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

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

	len = 0;
	if (p == NULL)
		len += write(1, "(nil)", 5);
	else
	{
		len += write(1, "0x", 2);
		len += ft_putpointer((unsigned long)p);
	}
	return (len);
}
