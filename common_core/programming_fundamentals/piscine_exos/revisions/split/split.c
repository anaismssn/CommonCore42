/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 23:46:29 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/27 00:38:52 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_identificateur(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return (1);
	else
		return (0);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_identificateur(str[i]) == 1)
			i++;
		if (str[i] && ft_identificateur(str[i]) == 0)
		{
			count++;
			while (str[i] && ft_identificateur(str[i]) == 0)
				i++;
		}
	}
	return (count);
}

char	*nouveau_tab(char *str)
{
	int	i;
	char	*tab;

	i = 0;
	while(str[i] && ft_identificateur(str[i]) == 0)
		i++;
	tab = malloc(sizeof(char) * (i + 1));
		if (!tab)
			return (NULL);
	i = 0;
	while(str[i] && ft_identificateur(str[i]) == 0)
	{
		tab[i] = str[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}

char	**split(char *str)
{
	int	i;
	char	**result;
	int	j;

	i = 0;
	j = 0;

	result = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!result)
		return (NULL);
	while(str[i])
	{
		while(str[i] && ft_identificateur(str[i]) == 1)
		{
			i++;
		}
		if(str[i] && ft_identificateur(str[i]) == 0)
		{
			result[j] = nouveau_tab(str + i);
			j++;
			while(str[i] && ft_identificateur(str[i]) == 0)
			{
				i++;
			}
		}
	}
	result[j] = NULL;
	return(result);
}

int	main()
{
	char *str;
	char **tab;
	int	i;

	str = "Hello tu vas bien lol";
	tab = split(str);
	i = 0;

	while (tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}

