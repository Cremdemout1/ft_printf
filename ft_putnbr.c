/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 09:59:52 by yohan             #+#    #+#             */
/*   Updated: 2023/11/22 20:33:30 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_putnbr(int nbr, int *len)
{
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
		len += 11;
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar ('-', len);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10, len);
		ft_putnbr(nbr % 10, len);
	}
	else
		ft_putchar(nbr + '0', len);
}