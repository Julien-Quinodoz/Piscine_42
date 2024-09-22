/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:16:43 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/02 15:49:51 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	result = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
	{
	result = 1;
		return (result);
	}
	while (nb > 1 && i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
