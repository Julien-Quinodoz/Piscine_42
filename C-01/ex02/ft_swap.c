/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 11:28:02 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/23 12:22:57 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int		tp;

	tp = *b;
	*b = *a;
	*a = tp;
}
/* #include <unistd.h>
 #include <stdio.h>
int	main(void)
{

	int a = 10;
	int b = 42;
	
	ft_swap(&a, &b);

	printf("%d - %d",a ,b);

return (0);
}*/
