#ifndef FT_PRINTF_H

# define FT_PRINTF_H

#include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_print_long(int n);
int	ft_print_hex(unsigned int nb, char c);
int	ft_printf(const char *str, ...);

#endif
