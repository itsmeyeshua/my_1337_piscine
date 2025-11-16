CC = cc
CFLAGS = -Wall -Wextra -Werror
COMMON = main.c ft_putchar.c
RUSHES = rush00.c rush01.c rush02.c rush03.c rush04.c

all: rush00

rush%: rush%.c $(COMMON)
	$(CC) $(CFLAGS) $(COMMON) $< -o $@

clean:
	rm -f rush00 rush01 rush02 rush03 rush04

fclean: clean

re: fclean all
