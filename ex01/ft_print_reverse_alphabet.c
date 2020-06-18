/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 09:38:22 by prama             #+#    #+#             */
/*   Updated: 2020/06/18 09:49:56 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    ft_print_reverse_alphabet(void)
{
    char    letter;

    letter = 'z';
    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }
}

int main(void)
{
    ft_print_reverse_alphabet();
    return 0;
}
