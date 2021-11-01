# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/11/01 18:39:10 by nhariman      #+#    #+#                  #
#    Updated: 2021/11/01 21:35:33 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

FILES = main.cpp \
		Weapon.cpp \
		HumanA.cpp \
		HumanB.cpp

OFILES = $(FILES:.cpp=.o)

NAME = weapon

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: %.cpp HumanA.hpp HumanB.hpp Weapon.hpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all