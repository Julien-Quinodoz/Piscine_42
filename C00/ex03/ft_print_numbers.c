/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:30:45 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/22 17:28:58 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
	{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int	x;

	x = '0';
	while (x < ':')
	{
		ft_putchar(x);
		x++;
	}
}
