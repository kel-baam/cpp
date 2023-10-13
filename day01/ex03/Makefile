
NAME = Weapon

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

SUB = *.cpp 

OBJ =  *.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${SUB} ${CPPFLAGS} -o ${NAME}


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



