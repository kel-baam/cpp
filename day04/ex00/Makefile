
NAME = Animal

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror -fsanitize=address

SUB = main.cpp Dog.cpp Cat.cpp Animal.cpp WrongCat.hpp WrongAnimal.hpp

OBJ =  main.o Dog.o Cat.o Animal.o WrongCat.o WrongAnimal.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



