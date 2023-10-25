
NAME = DiamondTrap

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SUB = DiamondTrap.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp

OBJ = DiamondTrap.o ClapTrap.o FragTrap.o ScavTrap.o main.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



