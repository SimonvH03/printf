/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:49:58 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/22 21:49:10 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int	ft_putnbr(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		len += ft_putnbr(n / 10);
	n = n % 10;
	len += ft_putchar(n + 48);
	return (len);
}
