
NAME = Brain

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SUB = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp -fsanitize=address

OBJ =  main.o Animal.o Brain.o Cat.o Dog.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



