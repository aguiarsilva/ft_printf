/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_cases.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:13:05 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/11 15:04:59 by baguiar-         ###   ########.fr       */
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

