/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 10:22:27 by yohan             #+#    #+#             */
/*   Updated: 2023/11/22 20:24:28 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>

int ft_customPrintf(const char *str, ...);

void	ft_putnbr(int nbr, int *len);
void    ft_lowerHex(int nbr, int *len);
void    ft_UpperHex(int nbr, int *len);
void    ft_putDecValue(unsigned int nbr, int *len);
void    ft_printWholeAddress(size_t pointer, int *len);

void    ft_putchar(char c, int *len);
void    ft_putstr(char *str, int *len);

#endif