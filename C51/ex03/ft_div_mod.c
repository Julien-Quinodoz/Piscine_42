/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:27:06 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/23 13:02:49 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*

#include <stdio.h>

	int main(void)
{
	
	int	a = 145;
	int b = 34;
	int div = 0;
	int mod = 0;

	ft_div_mod(a, b, &div, &mod);

	printf("%d - %d",div ,mod );

	return(0);

}
*/
