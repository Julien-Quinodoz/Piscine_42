/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 14:45:02 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/29 14:39:37 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	tf;
	int	x;

	i = 0;
	tf = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i])
	{
		tf = 0;
		x = i;
		while (to_find[tf] && str[x] == to_find[tf])
		{
			if (to_find[tf + 1] == '\0')
				return (str + i);
			x++;
			tf++;
		}
			i++;
	}
	return (0);
}
