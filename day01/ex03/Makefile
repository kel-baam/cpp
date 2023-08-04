
NAME =ex03

CC = g++

CFLAGS = -g -Wall -Wextra -Werror -fsanitize=address

SUB = *.cpp 

OBJ =  *.o


all : $(NAME)

$(NAME) :$(SUB)
	${CC} ${SUB} ${CFLAGS} -o ${NAME}


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



