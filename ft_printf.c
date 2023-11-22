/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:13:52 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/22 20:05:12 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

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

int	ft_xprint(int x)
{
	return (ft_putnbr_base(x, "0123456789abcdef"));
}

int	ft_upxprint(int x)
{
	return (ft_putnbr_base(x, "0123456789ABCDEF"));
}

int	ft_spellbook(va_list args, const char *form)
{
	if (*form == '%')
		return (ft_cprint('%'));
	if (*form == 'c')
		return (ft_cprint(va_arg(args, int)));
	if (*form == 's')
		return (ft_sprint(va_arg(args, char *)));
	if (*form == 'i' || *form == 'd')
		return (ft_idprint(va_arg(args, int)));
	if (*form == 'x')
		return (ft_xprint(va_arg(args, int)));
	if (*form == 'X')
		return (ft_upxprint(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		bytes_printed;
	int		i;

	va_start(args, form);
	bytes_printed = 0;
	i = 0;
	while (form[i])
	{
		if (form[i] == '%')
			bytes_printed += ft_spellbook(args, (form + ++i));
		else
			bytes_printed += write(1, (form + i), 1);
		i++;
	}
	va_end(args);
	return (bytes_printed);
}

int	main(void)
{
	ft_printf("%%\n%c\n%s\n%i\n%d\n%x\n%X\n", 'c', "string", 12345, 12345, 164, 164);
	return (0);
}
