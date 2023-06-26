/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 13:31:56 by nprudenc          #+#    #+#             */
/*   Updated: 2023/06/26 12:03:23 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "ft_printf.h"
#include <unistd.h>
#include <stdio.h>

int	ft_putchar(char c)
{	
	return (write(1, &c, 1));
}
