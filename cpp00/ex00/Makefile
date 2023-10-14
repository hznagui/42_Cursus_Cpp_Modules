# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hznagui <hznagui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/14 15:25:08 by hznagui           #+#    #+#              #
#    Updated: 2023/10/14 15:40:45 by hznagui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror

FILE = 	megaphone.cpp \

OBJ_FILE = $(FILE:.cpp=.o)

COLOUR_GREEN=\033[1;32m

COLOUR_RED=\033[1;31m

all : $(NAME)

$(NAME) : $(OBJ_FILE)
	@c++ -std=c++98 $(FLAGS) $(FILE) -o $(NAME)
	@echo "$(COLOUR_GREEN)--->[mandatory part successfully created ✅]<---"
	
%.o: %.cpp
	@c++ -std=c++98 $(FLAGS) -c $< -o $@
	
clean :
	@rm -rf $(OBJ_FILE)
	@echo "$(COLOUR_RED)--->[obj file deleted successfully ✅]<---"

fclean: clean
	@rm -f $(NAME)
	@echo "$(COLOUR_RED)--->[program deleted successfully ✅]<---"


re : fclean all