/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:13:05 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/20 08:29:53 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int       ft_putchar_c(char c)
{
    return(write(1, &c, 1));
}

int       ft_putstr_s(char *s)
{
    int i;

    i = 0;
    if (!s)
    {
        return(write(1, "(null)", 6));
    }
    while (s[i])
    {
        write(1, &s, 1);
        i++;
    }
    return (i);
}

/* int ft_putdigit(long n, int base)
{
  int dig_len;
  char  *sym;

  sym = "0123456789abcdef";
  if(n < 0)
  {
    write(1, '-', 1);
    return (ft_putdigit(-n, base) + 1);
  }
  else if (n < base)
    return (ft_putchar_c(sym[n]));
  else
  {
    dig_len = ft_putdigit(n / base, base);
    return (count + ft_putdigit(n % base, base));
  }
} */

int       ft_putint_d_i(int num)
{
    int i;

    i = 0;
    if (num < -9 || num > 9)    
      i += ft_putint_d_i(num / 10);
    else if (num < 0)
      i += ft_putchar_c('-');
    if (num < 0)
      i += ft_putchar_c((num % 10 * -1) + '0');
    else if (num >= 0)
      i += ft_putchar_c(num % 10 + '0');
  return (i);
}

int ft_putunint_u(unsigned int u)
{
  int i;

  i = 0;
  if (u > 9)
    i += ft_putunint_u(u / 10);
  i += ft_putchar_c(u % 10 + '0');
  return (i);
}

int ft_hex_l(unsigned int num)
{
  int i;

  i = 0;
  if (num > 15)
    i += ft_hex_l(num / 16);
  num %= 16;
  if (num < 10)
    i += ft_putchar_c((num - 10) + 'a');
  else
    i += ft_putchar_c((num - 10) + 'A'); 
  return (i);
}
