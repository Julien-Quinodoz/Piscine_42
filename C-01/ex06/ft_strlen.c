/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquinodo <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 11:25:51 by jquinodo          #+#    #+#             */
/*   Updated: 2024/08/25 16:20:32 by jquinodo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
*/
int	ft_strlen(char *str)
{
	int	nbr;

	nbr = 0;
	while (str[nbr])
	{
		nbr++;
	}
	return (nbr);
}
/*

int	main(void)
{
	ft_strlen(" !!!erwergwekrhkerh  
   	e iugh gghiwe g8998t t9we8t 98t w9et etkjhdkrghw e87rt98w7etrwet! strLEN ");
	
	return (0);

	
}*/
