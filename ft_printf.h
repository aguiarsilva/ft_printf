/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:36:32 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/13 07:50:58 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include "libft/libft.h"
#include <stdarg.h>
#include <unistd.h>

int ft_putchar_c(char c);
int ft_putstr_s(char *s);
int ft_putint_d_i(int num);
int ft_putuint_u(unsigned int u);

int ft_printf(const char *format, ...);

#endif

