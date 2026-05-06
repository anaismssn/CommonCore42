/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 08:32:50 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/16 11:44:32 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

/*void ft_putnbreasy(int a)
{
	long nb = a;
	if nb < 0
	{
	...
}*/

void	ft_putnbr(int nb)
{
	long a;
	a = nb;

	if (a < -2147483648)
	return ;

	if (a < 0)
	{
		write (1, "-", 1);
		a = -a;
	}
	if (a/10)
	{
		ft_putnbr(a/10);
	}
	ft_putchar(a%10 + 48);
}

void	ft_fizzbuzz(void)
{
	int a;

	a = 1;
	while (a <=100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			write(1, "FizzBuzz", 8);
			write(1, "\n", 1);
			a++ ;
		}
		if (a % 3 == 0)
		{
			write(1, "Fizz", 4);
			write(1, "\n", 1);
			a++;
		}
		if (a % 5 == 0)
		{
			write (1,"Buzz", 4);
			write (1, "\n", 1);
			a++;
		}
		else
		{
			ft_putnbr(a);
			write (1, "\n", 1);
			a++;
		}
			
	}
}

int	main()
{
	ft_fizzbuzz();
	return(0);
}
