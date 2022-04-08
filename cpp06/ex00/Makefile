# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/23 13:05:39 by nhariman      #+#    #+#                  #
#    Updated: 2022/04/08 14:53:27 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = main.cpp \
		src/validation.cpp \
		src/Conversions.cpp


OFILES = $(FILES:.cpp=.o)

NAME = convert

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: src/%.cpp inc/%.hpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all