/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_comb2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 09:10:08 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/17 10:09:29 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int a;
	int b;

	a = 0;
	while(a <= 98)
	{
		b = a + 1;
		while(b <= 99)
		{
			ft_putchar(a/10 + 48);
			ft_putchar(a%10 + 48);
			ft_putchar(' ');
			ft_putchar(b/10 + 48);
			ft_putchar(b%10 + 48);
			if (a != 98 && b =! 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}

}

int	main()
{
	ft_print_comb2();
	return(0);
}

