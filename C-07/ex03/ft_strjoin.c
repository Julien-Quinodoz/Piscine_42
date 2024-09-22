/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 19:10:39 by jquinodo          #+#    #+#             */
/*   Updated: 2024/09/10 10:26:54 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	stlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*copy(char **strs, char *str, int size, char *sep)
{
	int	i;
	int	x;
	int	z;

	i = -1;
	z = 0;
	while (++i < size)
	{
		x = 0;
		while (strs[i][x])
		{
			str[z] = strs[i][x];
			x++;
			z++;
		}
		x = 0;
		while ((i < size - 1) && sep[x])
		{
			str[z] = sep[x];
			x++;
			z++;
		}
	}
	str[z] = '\0';
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s1;
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (size == 0)
	{
		s1 = malloc(1);
		s1[0] = '\0';
		return (s1);
	}
	while (i < size)
	{
		len += stlen(strs[i]);
		i++;
	}
	len += stlen(sep) * (size - 1);
	s1 = malloc((sizeof(char) * len) + 1);
	s1 = copy(strs, s1, size, sep);
	return (s1);
}
/*
#include <stdio.h>
int main(void)
{
	char *str;
	char *argv[5] = {"julien", "teste", "de", "str", "join"};
	str = ft_strjoin(5, argv, "-****-");
	printf("%s\n", str);
	return (0);
}
*/
