
NAME =ex04

CC = c++

CPPFLAGS =  -std=c++98 -Wall -Wextra -Werror

SUB = *.cpp 

OBJ =  *.o


all : $(NAME)

$(NAME) :$(SUB)
	${CC} ${SUB} ${CPPFLAGS} -o ${NAME}


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



