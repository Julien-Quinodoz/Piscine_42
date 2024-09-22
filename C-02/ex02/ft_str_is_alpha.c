/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:09:37 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/26 18:12:56 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 65 && str[i] <= 90) || (str[i] >= 95 && str[i] <= 122))
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
	char	alpha[] = "chaine de carateres";
  
	ft_str_is_alpha(alpha);

	printf("%s", alpha);






	return (0);

}
*/
