COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = ClapTrap.cpp \
		ScavTrap.cpp \
		main.cpp

OFILES = $(FILES:.cpp=.o)

NAME = scavtrap

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: %.cpp
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES)

fclean: clean
	@$(RM) $(NAME)

re: fclean all