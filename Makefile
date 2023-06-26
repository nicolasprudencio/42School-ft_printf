NAME = libftprintf.a
CC = cc
FLAGS = -Werror -Wextra -Wall
RM = rm -fr
INCLUDE = -I ./includes
SRCS = \
./src/ft_printf.c ./src/utils/ft_print_char.c \
./src/utils/ft_print_hex.c ./src/utils/ft_print_long.c \
./src/utils/ft_print_nbr.c ./src/utils/ft_print_str.c \
./src/utils/ft_print_pointer.c

OBJS = $(SRCS:.c=.o)
HDS = ./includes/ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@
	ar -rcs $(NAME) $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) a.out

run:
	clear && $(CC) $(INCLUDE) $(FLAGS) $(SRCS) $(HDS) && ./a.out

re:	fclean all

.PHONY: clean fclean