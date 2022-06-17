SRCS	= ./srcs/ft_putchar.c ./srcs/ft_putstr.c ./srcs/ft_swap.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
OBJS	= ${SRCS:.c=.o}
INCS	= ./includes/ft.h
NAME	= libft.a
CC		= gcc
AR		= ar r
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror

all : ${NAME}
.c.o :
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I${INCS}
${NAME} : ${OBJS}
	${AR} ${NAME} ${OBJS}
clean :
	${RM} ${OBJS}
fclean : clean
	${RM} ${NAME}
re : fclean all

.PHONY: all clean fclean re .c.o
