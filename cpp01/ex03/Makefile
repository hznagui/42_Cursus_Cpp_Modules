# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 15:25:08 by hznagui           #+#    #+#              #
#    Updated: 2023/10/22 16:06:09 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_violence

FLAGS = -Wall -Wextra -Werror

FILE = 	main.cpp\
HumanA.cpp HumanB.cpp Weapon.cpp \
		

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE) HumanA.hpp HumanB.hpp Weapon.hpp
	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE)
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all