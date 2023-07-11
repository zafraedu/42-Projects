NAME = pipex.a
LIBFT = $(LIBFT_PATH)/libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf

SRCS = $(wildcard src/*.c)
OBJS = $(patsubst $(SRC_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRCS))

SRCS_BONUS = $(wildcard bonus/*.c)
OBJS_BONUS = $(patsubst $(BONUS_PATH)/%.c, $(OBJ_PATH)/%.o, $(SRCS_BONUS))


#########################  directorios(rutas)  #################################
LIBFT_PATH = ./libft
OBJ_PATH = obj
SRC_PATH = src
INC_PATH = inc
BONUS_PATH = bonus

#########################  Colores  ############################################
R = \033[31;1m
G = \033[32;1m
C = \033[36;1m
Y = \033[33;1m
END = \033[0m

#########################  Normas  #############################################
$(NAME): $(OBJS)
	make -C $(LIBFT_PATH)
	cp $(LIBFT) ./$@
	$(AR) $@ $(OBJS)
	$(CC) -o pipex src/main.c $(NAME)
	@echo "\n$(G)[Compiled $(C) $@ $(G)successfully 🛠  ✅]\n$(END)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INC_PATH)/pipex.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

$(OBJ_PATH)/%.o: $(BONUS_PATH)/%.c $(INC_PATH)/pipex_bonus.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

#########################  ARGS  ###############################################
all: $(NAME)

bonus: $(NAME) $(OBJS_BONUS)
	$(AR) $(NAME) $(OBJS_BONUS)
	@echo "\n$(G)[Compiled $(C) $< with bonus $(G)successfully 🛠  ✅]\n$(END)"

clean:
	$(RM) $(OBJ_PATH)
	make clean -C $(LIBFT_PATH)
	@echo "\n$(Y)[Cleaned $(C) $(NAME) objects $(Y)successfully 🧹 ✅]\n$(END)"

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_PATH)
	$(RM) pipex
	@echo "$(R)[Removed $(C)'$(NAME)' $(R)successfully 🔥 ✅]\n$(END)"

re: fclean all

rebonus: fclean bonus

.PHONY: all bonus clean fclean re rebonus
