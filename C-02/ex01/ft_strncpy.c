/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:09:00 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/26 16:00:38 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && n > 0)
	{
			dest[i] = src[i];
			n--;
			i++;
	}
	while (n > 0)
	{
		dest[i] = '\0';
		n--;
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[14] = "";
	char	scr[] = "TESTE 8000 123456789 abcdefgh";
	
	
	ft_strncpy(dest, scr, 7);

	printf("%s", dest); 
	return (0);

}

*/
