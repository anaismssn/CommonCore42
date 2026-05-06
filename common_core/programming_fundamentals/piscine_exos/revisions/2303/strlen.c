/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 09:30:24 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/23 09:43:14 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strelen(char* str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while(str[i])
	{
		if (str[i] == 'z')
		count = count + 1;
		i++;
	}
	return(count);
}

int	main()
{
	char tab[] = "dhqjdzhjz";
	printf("%d caracteres z \n", strelen(tab));
}
