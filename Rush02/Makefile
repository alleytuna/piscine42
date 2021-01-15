SRCS	= *.c

OBJS	= ${SRCS: .c=.o}

NAME	= rush-02

CC		= cc
RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}
	
all:		${NAME}

clean: 
			rm ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
