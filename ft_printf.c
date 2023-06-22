/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:16:54 by nprudenc          #+#    #+#             */
/*   Updated: 2023/06/22 20:16:52 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"
#include <stdio.h>



int ft_printf(const char *str, ...)
{	
	va_list list;
	int		i;
	char	c;
	int		j;
	char	*s;

	i = 0;
	j = 0;
	va_start(list, str);
	while (str[i])
	{	
		if (str[i] == '%' && str[i + 1] == 'c')
		{	
			c = va_arg(list, int);
			ft_putchar(c);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 's')
		{	
			s = va_arg(list, char *);
			ft_putstr(s);
			i++;
		}
		else if (str[i] == '%' && str[i + 1] == 'i')
		{	
			j = va_arg(list, int);
			ft_putnbr(j);
			i++;
		} 
		else
		{
			ft_putchar(str[i]);
		}
		i++;
		// if (str[i] == '\n')
		// {	
		// 	ft_putchar('\n');
		// 	i++;
		// }
	}
	va_end(list);
	return (0);
}

int	main(void)
{	
	char	c;
	// char	*str = "hellow";
	int		i;

	i = -1234;
	c = 'A';
	i = 7.5;
	// ft_printf("meu char %i", i);
	printf("double: %d", i);
	i ^= 3;
	return (0);
}