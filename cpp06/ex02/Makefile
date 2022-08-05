# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nhariman <nhariman@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/03/23 13:05:39 by nhariman      #+#    #+#                  #
#    Updated: 2022/08/05 16:56:27 by nhariman      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

COMPILE = c++

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