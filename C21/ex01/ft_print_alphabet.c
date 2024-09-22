/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:07:31 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/22 09:22:08 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	int	x;

	x = 'a';
	while (x < '{')
	{
		ft_putchar(x);
		x++;
	}
}
