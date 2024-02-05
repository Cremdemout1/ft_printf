/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putUpperHex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 11:14:04 by yohan             #+#    #+#             */
/*   Updated: 2023/11/22 19:52:32 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_UpperHex(int nbr, int *len)
{
    int i;
    int baseValue;
    char *base;

    i = 0;
    baseValue = 0;
    base = "0123456789ABCDEF";
    while (base[baseValue])
        baseValue++;
    if (nbr >= baseValue)
        ft_UpperHex(nbr / baseValue, len);
    
    while(base[i] && base[i] != base[nbr % baseValue])
        i++;
    write (1, &base[i], 1);
    len += 1;
}

/* 
int main (void)
{
    int number = 42;
    ft_lowerHex(number);
    printf("\n%X", 42);
    return (0);
}
*/