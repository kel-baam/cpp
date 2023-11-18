
NAME = AForm 

CC = c++

CPPFLAGS = -std=c++98 -Wall -Wextra -Werror

SUB = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp
OBJ =  main.o Bureaucrat.o  AForm.o ShrubberyCreationForm.o RobotomyRequestForm.o PresidentialPardonForm.o


all : $(NAME)

$(NAME) :$(OBJ)
	${CC} ${OBJ} ${CPPFLAGS} -o ${NAME}

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f $(NAME)

re : fclean all



