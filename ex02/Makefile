# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/28 14:53:16 by hbakrim           #+#    #+#              #
#    Updated: 2024/12/28 14:53:18 by hbakrim          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++
FLAGC = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Cat.cpp Dog.cpp AAnimal.cpp  Brain.cpp
OBJ = ${SRC:.cpp=.o}
NAME = Prg

all: ${NAME}

${NAME} : ${OBJ}
	${CPP} ${FLAGC} -o ${NAME} ${OBJ}

%.o : %.cpp
	${CPP} ${FLAGC} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
