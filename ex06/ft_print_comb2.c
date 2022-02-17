/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_com2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:22:13 by acardena          #+#    #+#             */
/*   Updated: 2022/02/14 17:34:08 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (x++ < 98)
	{
		y = x;
		while (y++ < 99)
		{
			ft_putchar('0' + (x / 10));
			ft_putchar('0' + (x % 10));
			ft_putchar(' ');
			ft_putchar('0' + (y / 10));
			ft_putchar('0' + (y % 10));
			if (x != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
/*
int	main(int argc, const char *argv[])
{
	ft_print_comb2();
	return (0);
}*/
