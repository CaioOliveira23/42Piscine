/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ocaio-re <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 18:55:10 by ocaio-re          #+#    #+#             */
/*   Updated: 2023/09/04 18:55:18 by ocaio-re         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(int n)
{   
    write(1, &n, sizeof(n));
}

void ft_print_comb2(void)
{
    int i;
    int dez;
    int second;
    int unid;
    int first;

    first = 1;
    while (first <= 99)
    {
        write(1, "00 ", 3);
        ft_putchar((first / 10) + '0');
        ft_putchar((first % 10) + '0');
        write(1, ", ", 2);
        first++;
    }

    first = 1;
    second = 2;
    while (first <= 98 && second <= 99)
    {
        ft_putchar((first / 10) + '0');
        ft_putchar((first % 10) + '0');
        write(1, " ", 1);
        ft_putchar((second / 10) + '0');
        ft_putchar((second % 10) + '0');
        if (first == 98 && second == 99)
        {
            break;
        }
        
        write(1, ", ", 2);
        first++;
        second++;
    }
}

int main(void)
{
    ft_print_comb2();
}
