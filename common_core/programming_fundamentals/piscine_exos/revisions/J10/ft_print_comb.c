/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:26:49 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/17 10:13:01 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while(a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
		       	c = b + 1;
			while (c <= 9)
			{
				ft_putchar(a + 48);
				ft_putchar(b + 48);
				ft_putchar(c + 48);
				
				if (!(a == 7 && b == 8 && c == 9))
				write(1, ", ", 2);
				c++;
			}
		b++;
		}
		a++;

	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}

