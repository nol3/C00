/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acardena <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 12:24:52 by acardena          #+#    #+#             */
/*   Updated: 2022/02/11 12:35:21 by acardena         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	char	z;

	while (z >= 'a')
	{
		ft_putchar(z);
		z--;
	}
}
