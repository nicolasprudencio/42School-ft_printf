/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_pointer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 10:22:23 by nprudenc          #+#    #+#             */
/*   Updated: 2023/06/26 12:04:26 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printing(unsigned long nb)
{
	int	counter;

	counter = 0;
	if (nb / 16 > 0)
		counter += ft_printing(nb / 16);
	counter += ft_putchar("0123456789abcdef"[nb % 16]);
	return (counter);
}

int	ft_print_ptr(unsigned long nb)
{
	int	counter;

	counter = 0;
	if (nb == 0)
		return (write(1, "(nil)", 5));
	counter += write(1, "0x", 2);
	counter += ft_printing(nb);
	return (counter);
}
