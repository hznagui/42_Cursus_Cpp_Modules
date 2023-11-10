# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/08 09:36:01 by hznagui           #+#    #+#              #
#    Updated: 2023/11/10 17:00:55 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

FLAGS = -Wall -Wextra -Werror

FILE = 	ClapTrap.cpp \
		main.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE) ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp ClapTrap.hpp ScavTrap.hpp FragTrap.hpp
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE)
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all