/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:24:18 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/20 13:11:23 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include<stdio.h>
int	main()
{
	int a = 5;
	int b = 8;

	ft_swap(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
}	
