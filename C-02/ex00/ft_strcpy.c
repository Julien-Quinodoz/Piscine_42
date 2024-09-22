/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:05:15 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/26 10:06:48 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
/*



#include <stdio.h>

int	main(void)
{
	char src[] = "wen ew  w;h 69746 mgn io45 klw rht ";
	char dest[] = "";

	ft_strcpy(dest, src);

	printf("%s", dest);
	return (0);
}
*/
