# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/09/30 19:22:25 by nhariman      #+#    #+#                  #
#    Updated: 2021/09/30 19:22:49 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98 -pedantic

FILES = tests.cpp \
		Account.cpp

OFILES = $(FILES:.cpp=.o)

NAME = account

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: %.cpp Account.hpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all