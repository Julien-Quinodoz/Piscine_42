/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 15:50:32 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/03 10:36:17 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb == 0)
	{
		return (1);
	}
	if (nb < 1)
	{
		return (0);
	}
	if (nb > 1)
	{
		result = (nb * (ft_recursive_factorial(nb - 1)));
	}
	return (result);
}
/*
int main(void)
{
	ft_recursive_factorial(7);


	return (0); 
}
*/
