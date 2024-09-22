/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:11:16 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/26 18:55:43 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 47 && str[i] <= 57)
	i++;
		else
			return (0);
	}
	return (1);
}
/*


#include <stdio.h>

int	main(void)
{
	char	numeric[] = "Test 0987 numeric"; 
	
	ft_str_is_numeric(numeric);
	printf("%s", numeric);





	return (0);
}*/
