CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = do-op.c
OBJ = $(SRC:.c=.o)
TARGET = do-op


all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all

.PHONY: all clean fclean re