/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:28:15 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/29 13:48:37 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	isrc;

	i = 0;
	isrc = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[isrc] && isrc < nb)
	{
		dest[i] = src[isrc];
		isrc++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
