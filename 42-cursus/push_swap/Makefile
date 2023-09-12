NAME = push_swap
BONUS = checker
CC = gcc
CFLAGS = -Wall -Werror -Wextra
UNAME = $(shell uname)
INC = -I $(INC_DIR) -I $(LIBFT_DIR)/inc
LIBFT = $(LIBFT_DIR)/libft.a
RM = rm -rf

SRC_MAIN = $(SRC_DIR)/push_swap/main.c

SRCS_AUX = \
	$(SRC_DIR)/push_swap/operations/push.c\
	$(SRC_DIR)/push_swap/operations/reverse_rotate.c\
	$(SRC_DIR)/push_swap/operations/rotate.c\
	$(SRC_DIR)/push_swap/operations/swap.c\
	$(SRC_DIR)/push_swap/algorithm_utils.c\
	$(SRC_DIR)/push_swap/algorithm.c\
	$(SRC_DIR)/push_swap/check_args.c\
	$(SRC_DIR)/push_swap/move.c\
	$(SRC_DIR)/push_swap/position.c\
	$(SRC_DIR)/push_swap/stack.c\
	$(SRC_DIR)/push_swap/utils.c

SRCS_BONUS = $(SRC_DIR)/checker/checker.c

OBJ_MAIN = $(SRC_MAIN:$(SRC_DIR)/push_swap/%.c=$(OBJ_DIR)/push_swap/%.o)
OBJS_AUX = $(SRCS_AUX:$(SRC_DIR)/push_swap/%.c=$(OBJ_DIR)/push_swap/%.o)
OBJ_BONUS = $(SRCS_BONUS:$(SRC_DIR)/checker/%.c=$(OBJ_DIR)/checker/%.o)


#########################  directorios(rutas)  #################################
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc
LIBFT_DIR = libft


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

bonus: $(BONUS)

show:
	@printf "NAME  	: $(NAME)\n"
	@printf "CC	: $(CC)\n"
	@printf "CFLAGS	: $(CFLAGS)\n"
	@printf "SRCS	:$(addprefix \n\t , $(notdir $(SRCS)))\n"$

clean:
	@$(RM) $(OBJ_DIR)
	@make clean -sC $(LIBFT_DIR)
	@echo "\n$(GREEN)[Cleaned $(CIAN) '$(NAME) objects' $(GREEN)successfully]\n$(END)"

fclean: clean
	@make fclean -sC $(LIBFT_DIR)
	@$(RM) push_swap
	@$(RM) checker
	@echo "$(GREEN)[Removed $(CIAN)'$(NAME)' $(GREEN)successfully]\n$(END)"

re: fclean all

#########################  Normas  #############################################
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/push_swap.h
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/push_swap
	@mkdir -p $(OBJ_DIR)/checker
	@mkdir -p $(OBJ_DIR)/push_swap/operations
	@echo "$(BLUE)PUSH_SWAP Compiling:$(END) $(notdir $<)"
	@$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(NAME): $(OBJS_AUX) $(OBJ_MAIN)
	@make -sC $(LIBFT_DIR)
	@$(CC) $(OBJ_MAIN) $(OBJS_AUX) $(LIBFT) $(CFLAGS) $(INC) -g -o $@
	@echo "\n$(GREEN)[Compiled $(CIAN) $@ $(GREEN)successfully]\n$(END)"

$(BONUS): $(OBJS_AUX) $(OBJ_BONUS)
	@make -sC $(LIBFT_DIR)
	@$(CC) $(OBJ_BONUS) $(OBJS_AUX) $(LIBFT) $(CFLAGS) $(INC) -g -o $@
	@echo "\n$(GREEN)[Compiled $(CIAN) $@ $(GREEN)successfully]\n$(END)"

.PHONY: all bonus show clean fclean re test5 test100 test500
