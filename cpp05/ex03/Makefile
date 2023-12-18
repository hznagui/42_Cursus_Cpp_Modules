# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 18:10:06 by hznagui           #+#    #+#              #
#    Updated: 2023/12/18 18:25:48 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = form

FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g

FILE = 	Bureaucrat.cpp \
		main.cpp\
		Form.cpp\
		ShrubberyCreationForm.cpp\
		RobotomyRequestForm.cpp\
		PresidentialPardonForm.cpp\
		Intern.cpp\

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE) Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp

	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp Intern.hpp
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE)
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@rm -f *_shrubbery
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all