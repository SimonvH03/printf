/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon <simon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:05:22 by svan-hoo          #+#    #+#             */
/*   Updated: 2023/11/22 21:48:28 by simon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "printf_libft/printf_libft.h"
# include <stdarg.h>


int	ft_cprint(char c);
int	ft_sprint(char *str);
int	ft_idprint(int id);
int	ft_uprint(unsigned int u);
int	ft_xprint(int x);
int	ft_bigxprint(int x);

#endif