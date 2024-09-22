/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:25:53 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/29 17:11:15 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	isrc;

	i = 0;
	isrc = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[isrc])
	{
		dest[i] = src[isrc];
		isrc++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
