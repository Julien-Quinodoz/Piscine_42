/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:46:28 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/29 19:01:08 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}
/*
#include <stdio.h>

int	main (void)
{
	char	test[] = "teste de la chaine";
	char	test2[] = "92";
	printf("%s", test);
}

*/
