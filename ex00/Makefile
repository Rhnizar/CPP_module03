# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rrhnizar <rrhnizar@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/22 10:28:35 by rrhnizar          #+#    #+#              #
#    Updated: 2023/08/22 11:09:17 by rrhnizar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = exec

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:.cpp=.o)

CXX = c++

RFLAG = ${CXX} -Wall -Werror -Wextra -std=c++98

%.o : %.cpp
	${RFLAG} -c $< -o $@

all : ${Name}

${Name} : ${OBJ}
	${RFLAG} ${OBJ} -o ${Name}

clean :
	rm -rf ${OBJ}

fclean : clean
	rm -rf ${Name}

re : fclean all
