CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard ex*/*.c)
EXEC = $(SRCS:.c=)
EXEC := $(filter-out ex05/do-op, $(EXEC))


all: $(EXEC) ex05/do-op

ex05/do-op: ex05/do-op.c
	make -C ex05

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXEC)
	make clean -C ex05

fclean: clean
	make fclean -C ex05

re: fclean all
