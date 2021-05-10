# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/13 21:32:07 by nhariman      #+#    #+#                  #
#    Updated: 2021/05/10 12:40:48 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

#brew install gcc, then use g++-10 instead of clang, don't forget to change it
#back to clang for the evals
COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

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