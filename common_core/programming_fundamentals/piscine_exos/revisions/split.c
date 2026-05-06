/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 17:32:39 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/26 23:44:43 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_identificateur(char *c)
{
	if (c == "\n")
		return (1);
	else
		return(0);
}

int	count_words(char *str)
{
	int	i;

	i = 0;
	while (str[i] && ft_identificateur(str[i]) == 1) //sep
	{
		i++;
		if (str[i] && ft_identificateur(str[i] == 0); //pas un sep
			count++;
		while (str[i] && ft_identificateur(str[i] == 0);//sep
			i++;
	}
}

*char	nv_tableau(char *str)
{	
	int	i;

	i = 0;

	while(str(i))
	i++;
	nv_tableau = malloc(sizeof(char) * (i + 1));
	while(str[i] && ft_identificateur(str[i] == 1) //si cest un sep
	{	
		i++;
	}
	while(str[i] && ft_identicateur(str[i] == 0)
		nv_tableau[i] = str[i];
		i++;
	//if(str[i] && ft_identificateur(str[i] == 0)
		//str[i]++;
}



char	**ft_split(char *str)
{
	int	i;
	int	j;

	result = malloc(sizeof(char) *count_words(char stt



