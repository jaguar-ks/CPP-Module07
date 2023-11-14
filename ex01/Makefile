# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: faksouss <faksouss@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/14 00:41:30 by faksouss          #+#    #+#              #
#    Updated: 2023/11/14 01:09:17 by faksouss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = main.cpp

FLAGS = -Wall -Wextra -Werror -std=c++98

HDR = iter.hpp

OBJ = $(SRC:.cpp=.o)

NAME = ex01

# x :
# 	echo $(OBJ)

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $< -o $@

%.o : %.cpp $(HDR)
	c++ $(FLAGS) -I. -c $< -o $@

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all

.PHONY : all re clean fclean

.SILENT : all re clean fclean $(NAME) $(OBJ)
