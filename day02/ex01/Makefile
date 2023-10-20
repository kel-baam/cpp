
NAME = FixedPoint

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

SUB = Fixed.cpp main.cpp

OBJ =  Fixed.o main.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



