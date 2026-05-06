/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:46:23 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/19 22:56:58 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long	nb;
	nb = n;

	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb ;
	}

	if (nb / 10)
		ft_putnbr(nb/10);
	ft_putchar(nb%10 + 48);
}

int	main()
{
	ft_putnbr(-2147483648);
	return (0);
}
