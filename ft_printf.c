/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:36:52 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/20 08:31:31 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_fmt(char fmt, va_list ap)
{
  int out_len;

  out_len = 0;
  if (fmt == 'c')
      out_len += ft_putchar_c(va_arg(ap, int));
  else if (fmt == 's')
      out_len += ft_putstr_s(va_arg(ap, char *));
  else if (fmt == 'd' || fmt == 'i')
      out_len += ft_putint_d_i((long)va_arg(ap, int));
  else if (fmt == 'x')
      out_len += 1;
  //else if (fmt == 'X')
    //out_len += 
  else if (fmt == 'u')
      out_len += ft_putuint_u(va_arg(ap, unsigned int));
  //else if (fmt == 'p')
    //out_len +=
  else
      out_len += write(1, &fmt, 1);
  return (out_len);
}

int ft_printf(const char *format, ...)
{
  va_list ap;
  int     i;

  va_start(ap, format);
  i = 0;
  while(*format != '\0')
  {
    if (*format != '%')
      i += ft_putchar_c(*format);
    else
      i += ft_fmt(&format, ap, i);
    i++;
  }
  va_end(ap);
  return (i);
}
