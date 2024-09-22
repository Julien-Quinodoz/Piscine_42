/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/04 13:58:27 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/09 15:39:43 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*n_str;

	i = 0;
	n_str = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (n_str == NULL)
		return (NULL);
	while (src[i])
	{
		n_str[i] = src[i];
		i++;
	}
	n_str[i] = src[i];
	return (n_str);
}
/*
int	main(int argc, char *argv[])

{
	if (argc < 1)
		return (0);

	
	ft_strdup(argv[1]);

	return (0);
}
*/
