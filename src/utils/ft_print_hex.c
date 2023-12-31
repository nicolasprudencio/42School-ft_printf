/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:19:48 by nprudenc          #+#    #+#             */
/*   Updated: 2023/06/27 18:19:56 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned int nb, char x)
{
	int	letter_counter;

	letter_counter = 0;
	if (nb / 16 > 0)
		letter_counter += ft_print_hex(nb / 16, x);
	if (x == 'X')
		letter_counter += ft_putchar("0123456789ABCDEF"[nb % 16]);
	else
		letter_counter += ft_putchar("0123456789abcdef"[nb % 16]);
	return (letter_counter);
}
