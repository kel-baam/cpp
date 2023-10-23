
NAME = FragTrap 

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SUB = main.cpp ClapTrap.cpp FragTrap.cpp DiamondTrap.cpp

OBJ =  main.o ClapTrap.o FragTrap.o DiamondTrap.cpp


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



