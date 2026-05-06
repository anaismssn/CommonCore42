/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 13:58:56 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/20 14:01:52 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
	i++;
	return (i);
}

#include<stdio.h>
int     main()
{
        char tab[] = "Bonjour";

        printf("Bonjour a %d characteres", ft_strlen(tab));
        return(0);
}
