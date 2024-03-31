NAME = claptrap
EXERCISE = M_3 ex01

CC = c++
FLAGS = -Wall -Wextra -Werror -fsanitize=address -fno-omit-frame-pointer -std=c++98
INC = -I$(INC_DIR)
RM = rm -rf

SRCS = main.cpp $(SRC_DIR)/ClapTrap.cpp $(SRC_DIR)/ScavTrap.cpp
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
#########################  directorios(rutas)  #################################
OBJ_DIR = obj
INC_DIR = inc
SRC_DIR = src
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
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)/*.hpp
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -c $< -o $@ $(INC)
	@echo "$(BLUE)$(EXERCISE) Compiling:$(END) $(notdir $<)"

$(NAME): $(OBJS)
	@$(CC) $(FLAGS) $(INC) $(OBJS) -o $(NAME)
	@echo "$(GREEN)\n[Compiled$(CIAN) $@ $(GREEN)successfully]$(END)"

.PHONY: all show clean fclean re
