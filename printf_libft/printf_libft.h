/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_libft.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:53:50 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/12/17 18:30:42 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_LIBFT_H
# define PRINTF_LIBFT_H
# include <stdio.h>
# include <unistd.h>

int	ft_strlen(const char *c);

int	ft_putnbr_base(unsigned long n, char *base);
int	ft_putnbr(long n);
int	ft_putpointer(unsigned long p);
int	ft_putchar(char c);
int	ft_putstr(char *str);

#endif