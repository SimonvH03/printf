/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:49:58 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/24 00:13:30 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int	ft_putnbr_base(unsigned long n, char *base)
{
	const unsigned int	size = ft_strlen(base);
	int					len;

	len = 0;
	if (n >= size)
		len += ft_putnbr_base(n / size, base);
	len += ft_putchar(base[n % size]);
	return (len);
}
