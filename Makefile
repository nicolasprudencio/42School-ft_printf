NAME = libftprintf.a
CC = cc
FLAGS = -Werror -Wextra -Wall
RM = rm -fr
SRCS = ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $<
	ar -rcs $(NAME) $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) a.out

run:
	@$(CC) $(FLAGS) $(SRCS) && ./a.out

re:	fclean all
