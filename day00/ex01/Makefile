
NAME = PhoneBook

CC = c++

CFLAGS = -std=c++98 -Wall -Wextra -Werror

SUB = Contact.cpp  main.cpp PhoneBook.cpp

OBJ =  Contact.o  main.o PhoneBook.o


all : $(NAME)

$(NAME) :$(SUB)
	${CC} ${OBJ} ${CFLAGS} -o ${NAME}


clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



