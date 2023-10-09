NAME = philo
CC = gcc
CFLAGS = -Wall -Werror -Wextra
INC = -I $(INC_DIR)
RM = rm -rf
SRCS_MAIN = \
	$(SRC_DIR)/check_args.c\
	$(SRC_DIR)/init.c\
	$(SRC_DIR)/main.c\
	$(SRC_DIR)/routine.c\
	$(SRC_DIR)/sim_utils.c\
	$(SRC_DIR)/simulation.c\
	$(SRC_DIR)/utils.c\

OBJS_PHILO = $(SRCS_MAIN:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

#########################  directorios(rutas)  #################################
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = include

##############################  Colores  #######################################
RED		= \033[31;1m
GREEN	= \033[32;1m
CIAN	= \033[36m
BLUE	= \033[1;38;5;27m
YELLOW	= \033[33m;1m
WHITE	= \033[37;1m
U_LINE	= \033[4m
END 	= \033[0m

################################  ARGS  ########################################
all: $(NAME)

show:
	@printf "NAME  	: $(NAME)\n"
	@printf "CC	: $(CC)\n"
	@printf "CFLAGS	: $(CFLAGS)\n"
	@printf "SRCS	:$(addprefix \n\t , $(notdir $(SRCS_MAIN)))\n"$

clean:
	@$(RM) $(OBJ_DIR)
	@echo "\n$(GREEN)[Cleaned $(CIAN) '$(NAME) objects' $(GREEN)successfully]\n$(END)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(GREEN)[Removed $(CIAN)'$(NAME)' $(GREEN)successfully]\n$(END)"

re: fclean all

#########################  Normas  #############################################
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/philo.h
	@mkdir -p $(OBJ_DIR)
	@echo "$(BLUE)PHILO Compiling:$(END) $(notdir $<)"
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJS_PHILO)
	@$(CC) -fsanitize=thread -g3 $(OBJS_PHILO) $(CFLAGS) $(INC) -o $@
	@echo "\n$(GREEN)[Compiled $(CIAN) $@ $(GREEN)successfully]\n$(END)"

.PHONY: all bonus show clean fclean re

# flags para comprobar DATA RACE #
# -fsanitize=thread -g3

# comprobar DATA RACE con valgrind
# valgrind --tool=helgrind  ./philo

# comprobar memory leaks con valgrind
# valgrind --leak-check=full ./philo
