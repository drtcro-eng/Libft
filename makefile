NAME    = programa_final
SRCS    = main.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_strlen.c ft_putstr_reverse.c ft_strcmp.c ft_putnbr_base.c ft_hex_dump.c
CC      = clang
FLAGS   = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

re: clean all

