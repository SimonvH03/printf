/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:49:58 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/23 19:55:53 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int	ft_putnbr_base(unsigned int n, char *base)
{
	int			len;
	const int	size = ft_strlen(base);

	len = 0;
	if (n < 0)
	{
		len += ft_putchar('-');
		n = -n;
	}
	if (n >= size)
		len += ft_putnbr_base(n / size, base);
	n = n % size;
	len += ft_putchar(base[n]);
	return (len);
}
