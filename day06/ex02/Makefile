
NAME = Convert

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror
CXXFLAGS =  -Wall -Wextra -Werror

SUB = main.cpp A.cpp B.cpp C.cpp Base.cpp

OBJ =  main.o A.o B.o C.o Base.o


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



