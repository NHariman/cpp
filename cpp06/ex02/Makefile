# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/23 13:05:39 by nhariman      #+#    #+#                  #
#    Updated: 2022/04/13 20:30:54 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = main.cpp \
		src/Base.cpp


OFILES = $(FILES:.cpp=.o)

NAME = identify

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