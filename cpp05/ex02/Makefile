COMPILE = clang++

FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = main.cpp \
		src/Bureaucrat.cpp \
		src/Form.cpp \
		src/RobotomyRequestForm.cpp \
		src/PresidentialPardonForm.cpp \
		src/ShrubberyCreationForm.cpp \
		tests/run_bureaucrat_tests.cpp \
		tests/run_shrubbery_tests.cpp \
		tests/run_robotomy_tests.cpp \
		tests/run_pardon_tests.cpp

OFILES = $(FILES:.cpp=.o)

NAME = bureaucrat

all: $(NAME)

$(NAME): $(OFILES)
	@$(COMPILE) $(OFILES) -o $@

%.o: src/%.cpp tests/%.cpp inc/%.hpp
	@mkdir obj
	@$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OFILES) *_shrubbery

fclean: clean
	@$(RM) $(NAME) 

re: fclean all