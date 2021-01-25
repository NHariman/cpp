# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/13 21:32:07 by nhariman      #+#    #+#                  #
#    Updated: 2021/01/25 12:49:37 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = main.cpp \
		ClassPhonebook.cpp \
		ClassContact.cpp

OFILES = $(FILES:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: %.cpp ClassPhonebook.hpp ClassContact.hpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all