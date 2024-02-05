/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_costum_printf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohan <yohan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:54:30 by yohan             #+#    #+#             */
/*   Updated: 2023/11/24 19:20:47 by yohan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static void    ft_printCommands(char c, va_list *conversions, int *len, int *i)
{
    if (c == 'c')   //for single char
        ft_putchar(va_arg (*conversions, int), len);
    else if (c == 's')   //for string
        ft_putstr(va_arg (*conversions, char *), len);
    else if (c == '%')   //for pourcentage sign
        ft_putchar('%', len);
    else if (c == 'd' || c == 'i')   //for integer && decimal
        ft_putnbr(va_arg(*conversions, int), len);
    else if (c == 'x')   //for lowercase hexadecimal value
        ft_lowerHex(va_arg(*conversions, unsigned int), len);
    else if (c == 'X')   //for lowercase hexadecimal value
        ft_UpperHex(va_arg(*conversions, unsigned int), len);
    else if (c == 'u')   //for unsigned decimal value
        ft_putDecValue(va_arg(*conversions, unsigned int), len);
    else if (c == 'p')    //for pointer
        ft_printWholeAddress(va_arg(*conversions, size_t), len);
    else
        (*i)--;
}

int ft_customPrintf(const char *str, ...)
{
    va_list conversions;
    va_start(conversions, str);
    int i;
    int len;

    i = 0;
    len = 0;
    while (str[i])
    {
        if (str[i] == '%')
        {
            i++;
            ft_printCommands(str[i], &conversions, &len, &i);
            i++;
        }
        else
        {
            ft_putchar(str[i], &len);
            i++;
        }
    }
    va_end(conversions);
    return (len);
}

int main (void)
{
    char *memory = "hello world";
    ft_customPrintf("your charracter: %c\n", 'c');
    printf("printf: %c\n\n", 'c');
    ft_customPrintf("your string: %s\n", "test 1");
    printf("printf: %s\n\n", "test 1");
    ft_customPrintf("your number: %d\n", 0);
    ft_customPrintf("your number: %d\n", -2147482648);
    ft_customPrintf("your number: %d\n", 2147483647);
    printf("printf: %d\n", 0);
    printf("printf: %d\n", -2147482648);
    printf("printf: %d\n\n", 2147482647);
    ft_customPrintf("your integer: %i\n", 0);
    ft_customPrintf("your integer: %i\n", -2147483648);
    ft_customPrintf("your integer: %i\n", 2147482647);
    printf("printf: %i\n", 0);\
    int minValue = -2147483648;
    printf("printf: %i\n", minValue);
    printf("printf: %i\n\n", 2147483647);
    unsigned int minVals = 4294967295;
    ft_customPrintf("your unsigned number: %u\n", 4294967295);
    ft_customPrintf("your unsigned number: %u\n", 0);
    printf("printf: %u\n", minVals);
    printf("printf: %u\n\n", 0);
    ft_customPrintf("your HEX number: %X\n", 42);
    printf("printf: %X\n\n", 42);
    ft_customPrintf("your hex number: %x\n", 42);
    printf("printf: %x\n\n", 42);
    ft_customPrintf("your number: %p\n", memory);
    printf("printf: %p\n\n", memory);
    return (0);
}
