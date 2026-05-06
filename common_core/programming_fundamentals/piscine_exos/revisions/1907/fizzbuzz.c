/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:58:42 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/19 23:22:59 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n/10)
	ft_putnbr(n/10);
	ft_putchar(n%10 + 48);
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
		}
		else if (a % 3 == 0)
		{
			write(1, "Fizz\n", 5);
		}
		else if(a % 5 == 0)
		{
			write(1, "Buzz\n", 5);
		}
		else
		{
			ft_putnbr(a);
			write (1, "\n", 1);
		}
		a++;
	}
}

int	main()
{
	fizzbuzz();
	return(0);
}
			
