
NAME = Materia

CC = c++
 
CPPFLAGS = -std=c++98 -Wall -Wextra -Werror 

SUB = main.cpp AMateria.cpp Cure.cpp Ice.cpp ICharacter.cpp Character.cpp  MateriaSource.cpp IMateriaSource.cpp

OBJ =  main.o AMateria.o Cure.o Ice.o ICharacter.o Character.o  MateriaSource.o IMateriaSource.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



