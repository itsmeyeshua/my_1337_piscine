CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard ex*/*.c)
EXEC = $(SRCS:.c=)

all: $(EXEC)

%: %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXEC)

fclean: clean



re: fclean all
