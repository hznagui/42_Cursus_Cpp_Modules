# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 10:03:06 by hznagui           #+#    #+#              #
#    Updated: 2023/11/21 12:32:19 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Character

FLAGS = -Wall -Wextra -Werror

FILE = 	AMateria.cpp \
		main.cpp\
		Cure.cpp\
		Ice.cpp\
		Character.cpp\

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE) Cure.hpp AMateria.hpp ICharacter.hpp Ice.hpp Character.hpp 
	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp Cure.hpp AMateria.hpp ICharacter.hpp Ice.hpp Character.hpp 
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE)
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all