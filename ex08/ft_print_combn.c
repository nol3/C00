/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:59:23 by acardena          #+#    #+#             */
/*   Updated: 2022/02/17 11:16:06 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_salida(int nb, int *tab, int pos)
{
	int	x;

	if (pos == 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
	x = 0;
	while (x < nb)
	{
		ft_putchar(tab[x] + '0');
		x++;
	}
}

void	ft_print_combn_incremento(int nb, int *tab)
{
	int	y;
	int	max;

	y = nb -1;
	max = 9;
	while (tab[y] == max)
	{
		y -= 1;
		max -= 1;
	}
	tab[y] += 1;
	while (y < nb)
	{
		tab[y + 1] = tab[y] +1;
		y++;
	}
}

void	ft_print_combn(int nb)
{
	int	tab[10];
	int	z;

	z = 0;
	while (z < nb)
	{
		tab[z] = z;
		z++;
	}
	ft_salida(nb, tab, 0);
	while (tab[0] != 10 - nb || tab[nb - 1] != 9)
	{
		if (tab[nb - 1] != 9)
		{
			tab[nb -1] += 1;
		}
		else
		{
			ft_print_combn_incremento(nb, tab);
		}
		ft_salida(nb, tab, 1);
	}
}

int	main(void)
{
	ft_print_combn(4);
	return (0);
}
