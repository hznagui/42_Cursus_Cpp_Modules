# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 11:05:52 by hznagui           #+#    #+#              #
#    Updated: 2023/11/18 12:38:51 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

FLAGS = -Wall -Wextra -Werror

FILE = 	Animal.cpp \
		main.cpp\
		Cat.cpp\
		Dog.cpp\
		WrongCat.cpp\
		WrongAnimal.cpp\
		Brain.cpp\

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE) Cat.hpp Animal.hpp Dog.hpp WrongAnimal.hpp Brain.hpp
	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp Cat.hpp Animal.hpp Dog.hpp WrongAnimal.hpp Brain.hpp
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE)
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all