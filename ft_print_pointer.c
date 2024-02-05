/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:01:51 by yohan             #+#    #+#             */
/*   Updated: 2023/11/22 19:43:09 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void    ft_printAddress(size_t value, int *len)
{
    char *str;
    int i;
    str = "0123456789abcdef";
    i = 0;
    value = (unsigned long) value;
    
    if (value >= 16)
    {
        ft_printAddress(value / 16, len);
        ft_printAddress(value % 16, len);
    }
    
    else
    {
            i = value;
            write (1, &str[i], 1);
    }
}

void    ft_printWholeAddress(size_t values, int *len)
{
    write (1, "0x", 2);
    len += 2;
    ft_printAddress(values, len);
}

/* 
int main (void)
{
    char *hello = "your mom";
    char *number = "7";
    ft_printWholeAddress((size_t)hello);
    printf("\n%p\n", hello);
    ft_printWholeAddress((size_t)number);
    printf("\n%p", number);
    return (0);
}
*/