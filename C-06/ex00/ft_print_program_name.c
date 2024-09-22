/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 19:39:04 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/04 10:50:19 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (str[0])
	{
		write(1, str, 1);
	str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		ft_putstr(argv[0]);
		write(1, "\n", 1);
	}
	else
		return (0);
}
