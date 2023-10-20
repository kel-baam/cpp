

NAME =megaphone

CC = c++ 

CFLAGS =  -Wall -Wextra -Werror

SUB = megaphone.cpp 

OBJ =  megaphone.o


all : $(NAME)

$(NAME) :$(SUB)
	${CC} ${OBJ} ${CFLAGS} -o ${NAME}


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



