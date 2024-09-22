/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 14:00:28 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/09 15:44:40 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*n_tab;

	i = 0;
	if (min >= max)
		return (0);
	n_tab = malloc((max - min) * (sizeof(int)));
	if (n_tab == 0)
		return (0);
	while (min < max)
	{
		n_tab[i] = min;
		i++;
		min++;
	}
	n_tab[i] = max;
	return (n_tab);
}
/*
#include <stdio.h>
int	main(void)
{	
	int tab;
	tab = *(ft_range(4, 101));

	printf("%d", tab);
		return (0);
}
*/
