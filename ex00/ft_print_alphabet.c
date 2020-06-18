/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 08:40:45 by prama             #+#    #+#             */
/*   Updated: 2020/06/18 09:34:56 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_print_alphabet(void)
{
    char    letter;

    letter = 'a';
    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }
}

int main(void)
{
    ft_print_alphabet();
    return 0;
}

