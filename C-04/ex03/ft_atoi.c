/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 18:17:11 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/05 10:08:21 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	negatif;
	int	i;
	int	nbr;

	negatif = 1;
	i = 0;
	nbr = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negatif = negatif * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		nbr = nbr * 10;
		nbr += str[i] - '0';
		i++;
	}
	return (nbr * negatif);
}
/*
#include <unistd.h>
int	main (void)
{
	char	str[] = (" ---+--+1234ab567");
	
	ft_atoi(str);

	

	return (0);
}




*/
