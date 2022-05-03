COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = main.cpp

OFILES = $(FILES:.cpp=.o)

NAME = myFirstTemplates

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: src/%.cpp tests/%.cpp inc/%.hpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME) 

re: fclean all