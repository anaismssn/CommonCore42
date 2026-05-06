/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 10:44:29 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/16 11:21:13 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
        write (1, &c, 1);
}

void    ft_putnbr(int a)
{
	long nb;

        nb = a;
	
	if (nb < 0)
        {
                write (1, "-", 1);
                nb = -nb;
        }
        if (nb/10)
        {
                ft_putnbr(nb/10);
        }
        ft_putchar(nb%10 + 48);
}

int	main()
{
	ft_putnbr(-2147483648);
	ft_putnbr(4558);
	ft_putnbr(-5457);
	return(0);
}

