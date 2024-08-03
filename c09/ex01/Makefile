SRCS	= ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
HEAD	= ./includes/
NAME	= libft.a
AR		= ar rc
RM		= rm -f
FLAGS	= -Wall -Wextra -Werror

all:		${NAME}

srcs/%.o:	srcs/%.c
			gcc ${FLAGS} -c -I ${HEAD} $< -o $@

${NAME}:	${OBJS}
			${AR} ${NAME} ${OBJS}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
