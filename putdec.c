/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putdec.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:47:18 by yohan             #+#    #+#             */
/*   Updated: 2023/11/22 20:33:57 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "printf.h"

/* 
void    ft_putchar(char c)
{
    write (1, &c, 1);
}
*/
void    ft_putDecValue(unsigned int nbr, int *len)
{
    if(nbr > 9)
        ft_putDecValue(nbr / 10, len);
    ft_putchar((nbr % 10) + '0', len);        
}
/* 
int main (void)
{
    ft_putDecValue(5648456u);
    return (0);
}
*/