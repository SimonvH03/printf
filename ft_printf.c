/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svan-hoo <svan-hoo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:13:52 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/22 18:36:08 by svan-hoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "../libft/libft.h"

int	ft_cprint(char c)
{
	ft_putchar(c);
	return (1);
}

int	ft_sprint(char *str)
{
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_idprint(int arg)
{
	ft_putnbr(arg);
	return (ft_intlen(arg));
}

int	ft_spellbook(va_list args, const char *form)
{
	if (*form == '%')
		return (ft_cprint('%'));
	if (*form == 'c')
		return (ft_cprint(va_arg(args, char)));
	if (*form == 's')
		return (ft_sprint(va_arg(args, char *)));
	if (*form == 'i' || *form == 'd')
		return (ft_idprint(va_arg(args, int)));
	return (0);
}

int	ft_printf(const char *form, ...)
{
	va_list	args;
	int		bytes_printed;
	int		i;

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
	ft_printf("%%\n", 5);
	ft_printf("%c\n", 5);
	ft_printf("%s\n", 5);
	ft_printf("%i\n", 5);
	return (0);
}
