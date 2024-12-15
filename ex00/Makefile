CC		= cc
CFLAGS	= -Wall -Wextra -Werror

SRCDIR	= srcs
INCDIR	= includes

SRC		= $(wildcard $(SRCDIR)/*.c)
OBJ		= ${SRC:.c=.o}

NAME	= rush-02

.c.o:
		${CC} ${CFLAGS} -I includes -c $< -o ${<:.c=.o}

${NAME}:	${OBJ}
			$(CC) ${CFLAGS} $(OBJ) -o $(NAME)

all:		${NAME}

clean:
			rm -f ${OBJ}

fclean: 	clean
			rm -f ${NAME}

re: 		fclean all

.PHONY: 	all clean fclean re
