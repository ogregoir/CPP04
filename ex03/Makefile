NAME	=		AMateria

CFLAGS	=		-Wall -Werror -Wextra	-std=c++98

CC	=			c++

RM	=			rm -rf

SRCS	=		main.cpp \
				AMateria.cpp \

OBJC	=		${SRCS:.cpp=.o}


all: ${NAME}

${NAME}: ${OBJC}
	${CC} ${CFLAGS} ${CFLAGS} ${OBJC} -o ${NAME}

clean :
	${RM} ${OBJC}

fclean: clean
	${RM} ${NAME}

re: fclean all