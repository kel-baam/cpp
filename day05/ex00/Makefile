
NAME = Bureaucrat 

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SUB = main.cpp Bureaucrat.cpp
OBJ =  main.o Bureaucrat.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



