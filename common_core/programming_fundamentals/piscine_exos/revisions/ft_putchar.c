/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 13:58:14 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/13 14:21:57 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//lalphabet

void	ft_putchar(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}

int	main(void)
{
	ft_putchar();
	return(0);
}

