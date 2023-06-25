/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:16:54 by nprudenc          #+#    #+#             */
/*   Updated: 2023/06/24 21:06:56 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

int ft_printf(const char *str, ...)
{	
	va_list list;
	int		i;
	int		counter;

	i = 0;
	counter = 0;
	va_start(list, str);
	while (str[i])
	{	
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				counter += ft_putchar(va_arg(list, int));
			if (str[i] == '%')
				counter += ft_putchar('%');
			if (str[i] == 's')
				counter += ft_putstr(va_arg(list, char *));
			if (str[i] == 'i' || str[i] == 'd')
				counter += ft_putnbr(va_arg(list, int));
			if (str[i] == 'u')
				counter += ft_print_long(va_arg(list, int));
			if (str[i] == 'x')
				counter += ft_print_hex(va_arg(list, unsigned int), 'x');
			if (str[i] == 'X')
				counter += ft_print_hex(va_arg(list, unsigned int), 'X');
		}
		else
			counter += ft_putchar(str[i]);
		i++;
	}
	va_end(list);
	return (counter);
}

 /*
	organizar sua estrutura para a função final
	retornar a quantidade exata de caracteres que
	foram impresso.

	além disso você deve reduzir essas condicionais para ocuparem
	somente uma linha.
	-> separar cada caso para uma função exclusiva

 */

// int	main(void)
// {	
// 	char	c;
// 	// char	*str = NULL;
// 	int		i;
// 	int		teste;
// 	// int		j;

// 	i = '\0';
// 	c = 'A';
// 	// j = 7.5;
// 	teste = ft_printf(" %u %u %u %u %u %u %u", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
// 	ft_printf("\nMine: %i\n\n", teste);
// 	// teste = printf("holy moly: %d",	ULONG_MAX);
// 	// printf("\nprintf: %i", teste);
// 	return (0);
// }