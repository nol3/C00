/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <acardena@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 16:31:27 by acardena          #+#    #+#             */
/*   Updated: 2022/02/12 16:45:18 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_is_negative(int n)
{
	if (n >=0)
	{
		ft_putchar('P');
	}
	else {
		ft_putchar('N');
	}
}

/* 
int main(int argc, const char *argv[])
{
	int i;

	i = -1;

	while (i != 2)
	{
		ft_is_negative(i);
		i++;
	}
	return 0;
} */

