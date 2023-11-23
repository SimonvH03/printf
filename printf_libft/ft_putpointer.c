/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:15:27 by simon             #+#    #+#             */
/*   Updated: 2023/11/23 23:27:50 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int	ft_putpointer(unsigned long p)
{
	int	len;

	len = 0;
	if (p >= 16)
		len += ft_putpointer(p / 16);
	p = p % 16;
	if (p > 9)
		len += ft_putchar(p + 'a' - 10);
	else
		len += ft_putchar(p + '0');
	return (len);
}