CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard ex*/*.c)
EXEC = $(SRCS:.c=)
EXEC := $(filter-out ex04/ft_convert_base2, $(EXEC))


all: $(EXEC) ex04/ft_convert_base

ex04/ft_convert_base: ex04/ft_convert_base.c ex04/ft_convert_base2.c
	$(CC) $(CFLAGS) ex04/ft_convert_base.c ex04/ft_convert_base2.c -o $@

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXEC)

fclean: clean

re: fclean all
