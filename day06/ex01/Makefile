
NAME = Convert

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
CXXFLAGS =  -Wall -Wextra -Werror

SUB = main.cpp Serializer.cpp

OBJ =  main.o Serializer.o


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



