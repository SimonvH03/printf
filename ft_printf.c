/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:13:52 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/23 23:37:42 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <limits.h>

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
	if (*form == 'u')
		return (ft_uprint(va_arg(args, unsigned int)));
	if (*form == 'x')
		return (ft_xprint(va_arg(args, int)));
	if (*form == 'X')
		return (ft_bigxprint(va_arg(args, unsigned int)));
	if (*form == 'p')
		return (ft_pprint(va_arg(args, void *)));
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
	ft_printf("mine:	\n%%\n%c\n%s\n%i\n%d\n%u\n%x\n%X\n%p\n", 'c', "string", INT_MIN, INT_MAX, -(UINT_MAX / 2), INT_MAX, -164, "pointer");
	printf("real:		\n%%\n%c\n%s\n%i\n%d\n%u\n%x\n%X\n%p\n", 'c', "string", INT_MIN, INT_MAX, -(UINT_MAX / 2), INT_MAX, -164, "pointer");
	return (0);
}
