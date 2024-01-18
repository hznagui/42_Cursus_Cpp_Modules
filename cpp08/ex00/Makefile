# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/18 10:34:22 by hznagui           #+#    #+#              #
#    Updated: 2024/01/18 11:21:07 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Array

FLAGS = -Wall -Wextra -Werror #-fsanitize=address -g

FILE = 	main.cpp\
		

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE) 	Array.hpp 
	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp 	Array.hpp 
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE)
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all
