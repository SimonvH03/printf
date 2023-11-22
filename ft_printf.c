/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:13:52 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/22 15:31:03 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

size_t	ft_cprint(char c)
{
	ft_putchar(c);
	return (1);
}

size_t	ft_sprint(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}

size_t	ft_iprint(int arg)
{
	ft_putnbr(arg);
	return (ft_intlen(arg));
}

size_t	ft_spellbook(va_list args, const char *form)
{
	if (*form == '%')
		return (ft_cprint('%'));
	if (*form == 'c')
		return (ft_cprint(va_arg(args, char)));
	if (*form == 's')
		return (ft_sprint(va_arg(args, char *)));
	if (*form == 'i')
		return (ft_iprint(va_arg(args, int)));
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
	ft_printf("%i\n", 5);
	return (0);
}
