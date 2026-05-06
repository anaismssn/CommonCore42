/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 08:59:45 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/23 09:28:00 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	long nb;

	nb = n;
	/*if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}*/
	if (nb / 10)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + 48);
}

void	fizzbuzz(void)
{
	int	a;

	a = 1;
	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			write(1, "FizzBuzz\n", 9);
			a++;
		}
		if (a % 3 == 0)
		{
			write(1, "Fizz\n", 5);
			a++;
		}
		if (a % 5 == 0)
		{
			write(1, "Buzz\n", 5);
			a++;
		}
		else
		{
			ft_putnbr(a);
			write(1, "\n", 1);
			a++;
		}
	}
}

int	main()
{
	fizzbuzz();
	return(0);
}

