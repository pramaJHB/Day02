/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 09:53:15 by prama             #+#    #+#             */
/*   Updated: 2020/06/18 09:55:21 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_print_numbers(void)
{
    char    number;

    number = '0';
    while (number <= '9')
    {
        putchar(number);
        number++;
    }
}

int main(void)
{
    ft_print_numbers();
    return 0;
}
