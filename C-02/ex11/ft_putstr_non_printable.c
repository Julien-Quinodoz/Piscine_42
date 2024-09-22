/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 19:29:25 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/11 09:23:31 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void  ft_convector(char c)
	 {
		 if (c < 10)
			 '0' + c;
		 else
			'a' + (c - 10)

void    ft_putstr_non_printable(char *str)
{
 	     char    *a;
 	     char    *b;
	     int i;
      	i = 0

	if (*str < 32 || *str > 126)
		char hex[3];

		 hex[0] = '\\';
		 hex[1] = ft_convector(c / 16);
		 hex[2] = ft_convector(c % 16)
			write (1, hex, 3);
	else
		write (1, str, 1);


