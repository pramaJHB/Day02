/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prama <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/18 09:53:15 by prama             #+#    #+#             */
/*   Updated: 2020/06/19 08:38:20 by prama            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_numbers(void)

{
	char	number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}


