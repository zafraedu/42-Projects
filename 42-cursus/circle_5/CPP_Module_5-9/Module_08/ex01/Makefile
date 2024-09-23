NAME = span
EXERCISE = M_8 ex01

CC = g++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp Span.cpp
OBJS = $(SRCS:%.cpp=$(OBJ_DIR)/%.o)
#########################  directorios(rutas)  #################################
OBJ_DIR = obj
#############################  Colores  ########################################
GREEN		=	\033[92;5;118m
YELLOW	=	\033[93;5;226m
CIAN		= \033[36m
BLUE		= \033[1;38;5;27m
END			= \033[0m
##############################  ARGS  ##########################################
all: $(NAME)

show:
	@printf "NAME  	: $(NAME)\n"
	@printf "CC	: $(CC)\n"
	@printf "FLAGS	: $(FLAGS)\n"
	@printf "SRCS	:$(addprefix \n\t , $(notdir $(SRCS)))\n"

clean:
	@$(RM) $(OBJ_DIR)
	@echo "$(YELLOW)- Object files removed.$(END)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(YELLOW)- Executable removed.$(END)"

re: fclean all
###########################  Normas  ###########################################
$(OBJ_DIR)/%.o: %.cpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@
	@echo "$(BLUE)$(EXERCISE) Compiling:$(END) $(notdir $<)"

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)[Compiled$(CIAN) $@ $(GREEN)successfully]$(END)"

.PHONY: all show clean fclean re
