/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 21:58:25 by acardena          #+#    #+#             */
/*   Updated: 2022/02/17 11:24:08 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c)
{
	write (1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{		
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar('0' + nb % 10);
	}
	else
	{
		ft_putchar('0' + nb);
	}
}
/*
int	main(int argc, const char *argv[])
{
	ft_putnbr(5);
	write(1, "\n", 1);
	ft_putnbr(25);
	write(1, "\n", 1);
	ft_putnbr(536);
	write(1, "\n", 1);
	ft_putnbr(5368);
	write(1, "\n", 1);
	ft_putnbr(53689);
	write(1, "\n", 1);
	ft_putnbr(536890);
	write(1, "\n", 1);
	ft_putnbr(214748364);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);
	ft_putnbr(-2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
	ft_putnbr(-2);
	write(1, "\n", 1);
	return (0);
}*/
