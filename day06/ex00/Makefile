
NAME = Convert

CC = c++

CXXFLAGS = -std=c++98 -Wall -Wextra -Werror

SUB = main.cpp ScalarConverter.cpp

OBJ =  main.o ScalarConverter.o

all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}
%.o: %.cpp %.hpp
	${CC} ${CXXFLAGS} -c $<

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all
