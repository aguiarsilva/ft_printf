/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:36:52 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/19 23:23:09 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_fmt(const char **form, va_list chg, int i)
{
  int out_len;

  out_len = 0;

}

int ft_printf(const char *format, ...)
{
  va_list ap;
  int     i;
  int     out_len;

  va_start(ap, format);
  i = 0;
  while(*format)
  {
    if (*format != '%')
      i += ft_putchar_c(*format);
    else
      i += ft_fmt(&format, ap, i);
    i++;
  }
  va_end(ap);
}
