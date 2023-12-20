/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baguiar- <baguiar-@student.42wolfsburg.de  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 11:08:38 by baguiar-          #+#    #+#             */
/*   Updated: 2023/12/20 11:38:07 by baguiar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude "ft_printf.h"

static int	ft_hexlen(unsigned int num)
{
	int	i;

	i = 0;
	while (num != 0)
	{
		num /= 16;
		i++;
	}
	return (i);
}

static int	ft_putx(unsigned int num, const char fmt)
{
	if (num >= 16)
	{
		ft_putx(num / 16, fmt);
		ft_putx(num % 16, fmt);
	}
	else
	{
		if (num <= 9)
			ft_putchar_fd((num + '0'), 1);
		else
		{
			if (fmt == 'x')
				ft_putchar_fd((num - 10 + 'a'), 1);
			else if (fmt == 'X')
				ft_putchar_fd((num - 10 + 'A'), 1);
		}
	}
}

int	ft_printf_x(unsigned int num, const char fmt)
{
	if (num == 0)
		return ft_putchar_fd('0', 1);
	else
		ft_putx(num);
	return (ft_hexlen(num));
}
