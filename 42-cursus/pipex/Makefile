NAME = pipex
NAME_BONUS = pipex_bonus

CC = gcc
CFLAGS = -Wall -Werror -Wextra
RM = rm -rf

SRCS = $(wildcard $(SRC_PATH)/*.c)
OBJS = $(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRCS))

SRCS_BONUS = $(wildcard $(BONUS_PATH)/*.c)
OBJS_BONUS = $(patsubst $(BONUS_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRCS_BONUS))


#########################  directorios(rutas)  #################################
OBJ_PATH = obj
SRC_PATH = src
INC_PATH = inc
LIBFT_PATH = libft
BONUS_PATH = bonus

#########################  Colores  ############################################
R = \033[31;1m
G = \033[32;1m
C = \033[36;1m
Y = \033[33;1m
END = \033[0m

#########################  ARGS  ###############################################
all: libft $(NAME)

bonus: libft $(NAME_BONUS)

libft:
	@make -C $(LIBFT_PATH)

clean:
	$(RM) $(OBJ_PATH)
	make clean -C $(LIBFT_PATH)
	@echo "\n$(Y)[Cleaned $(C) '$(NAME) objects' $(Y)successfully 🧹 ✅]\n$(END)"

fclean: clean
	make fclean -C $(LIBFT_PATH)
	$(RM) pipex pipex_bonus
	@echo "$(R)[Removed $(C)'$(NAME)' $(R)successfully 🔥 ✅]\n$(END)"

re: fclean all

rebonus: fclean bonus

#########################  Normas  #############################################
$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $(OBJS) $(LIBFT_PATH)/$(OBJ_PATH)/*
	@echo "\n$(G)[Compiled $(C) $@ $(G)successfully 🛠  ✅]\n$(END)"

$(NAME_BONUS): $(OBJS_BONUS)
	$(CC) $(CFLAGS) -o $@ $(OBJS_BONUS) $(LIBFT_PATH)/$(OBJ_PATH)/*
	@echo "\n$(G)[Compiled $(C) $@ $(G)successfully 🛠  ✅]\n$(END)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INC_PATH)/pipex.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

$(OBJ_PATH)/%.o: $(BONUS_PATH)/%.c $(INC_PATH)/pipex_bonus.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

.PHONY: all bonus libft clean fclean re rebonus
