/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprudenc <nprudenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 13:41:34 by nprudenc          #+#    #+#             */
/*   Updated: 2023/06/21 13:44:17 by nprudenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *s)
{	
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{	
		ft_putchar_fd(&s[i]);
		i++;
	}
}