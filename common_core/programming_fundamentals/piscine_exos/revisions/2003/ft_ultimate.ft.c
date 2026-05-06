/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate.ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamasso <anamasso@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 11:32:22 by anamasso          #+#    #+#             */
/*   Updated: 2026/03/20 12:24:05 by anamasso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main()
{
	int test = 5;
	
	int *test1 = &test;
	int **test1 = &test;
	int ***test3 = &test2;
	int ****test4 = &test3;
	int *****test5 = &test4;
	int ******test6 = &test5;
	int ******test7 = &test6;
	int *******test8 = &test7;

	ft_ultimate_ft(&test8);
