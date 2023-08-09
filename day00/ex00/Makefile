

NAME =megaphone

CC = c++

CFLAGS = -Wall -Wextra -Werror

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



