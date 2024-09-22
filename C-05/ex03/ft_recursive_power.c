/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 17:29:21 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/03 12:01:23 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	result = (nb * ft_recursive_power(nb, power -1));
	return (result);
}
/*
int	main(void)
{
	ft_recursive_power(5, 5);

	printf("%d", (ft_recursive_power(result));

	return (0);




}*/
