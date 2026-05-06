/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printfvf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaismasson <anaismasson@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 10:21:16 by anaismasson       #+#    #+#             */
/*   Updated: 2026/05/06 10:36:28 by anaismasson      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int check base(const char *, ...)
{
    __va_list listarg;

    va_start(listarg, format);
    if (s(i) == '%')
    {
        if (s(i + 1) == 'c')
            return(ft_putchar(va_arg(listqrg, int))°;
        if (s(i + 1) == 'd' OU s(i + 1) == 'i')
            return (ft_putnbr(va_arg(listarg, int)));
        if si (s(i + 1)) == 'p')
            return (ft_putnbr(va_arg(listarg, void)));
            
    } 
    va_end(listargs);
}

int ft_printf(const char *, ...)
{
    
}