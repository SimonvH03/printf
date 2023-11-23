/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:58:59 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/22 21:48:56 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf_libft.h"

int	ft_intlen_base(int n, char *base)
{
	int			len;
	const int	size = ft_strlen(base);

	len = 1;
	if (n < 0)
		len++;
	while (n >= size || n <= -size)
	{
		n = n / size;
		len++;
	}
	return (len);
}
