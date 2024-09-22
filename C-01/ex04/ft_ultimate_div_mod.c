/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:04:06 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/23 13:31:04 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tp1;
	int	tp2;

	tp1 = *a / *b;
	tp2 = *a % *b;
	*a = tp1;
	*b = tp2;
}
/*
#include <stdio.h>

	int main(void)
{

	int	a = 112;
	int b = 3;

	ft_ultimate_div_mod(&a, &b);



	printf("%d - %d",a ,b );

	return(0);

}

*/
