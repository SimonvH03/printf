/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:13:52 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/14 21:06:56 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

size_t	ft_dprint(int arg)
{
	ft_putnbr(arg);
	return (ft_intlen(arg));
}

size_t	ft_spellbook(va_list args, const char *form)
{
	if (*form == 'd')
		return (ft_dprint(va_arg(args, int)));
	return (0);
}

size_t	ft_printf(const char *form, ...)
{
	va_list	args;
	size_t	bytes_printed;
	size_t	i;

	va_start(args, form);
	i = 0;
	while (form[i])
	{
		if (form[i] == '%')
			bytes_printed += ft_spellbook(args, (form + ++i));
		else
			bytes_printed += write(1, form, 1);
		i++;
	}
	va_end(args);
	return (bytes_printed);
}

int	main(void)
{
	ft_printf("%d\n", 5);
	return (0);
}
