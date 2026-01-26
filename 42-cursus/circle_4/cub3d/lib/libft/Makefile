NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf
# busca todos los archivos .c en la carpeta src/ft
SRCS_FT = $(wildcard $(SRC_DIR)/ft/*.c)
SRCS_PF = $(wildcard $(SRC_DIR)/pf/*.c)
SRCS_GNL = $(wildcard $(SRC_DIR)/gnl/*.c)
# reemplaza la ruta src por obj y cambia la extensión .c a .o
OBJS_FT = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS_FT))
OBJS_PF = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS_PF))
OBJS_GNL = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS_GNL))
#═════════════════════════  directorios(rutas)  ═══════════════════════════════#
INC_DIR = inc
OBJ_DIR = obj
SRC_DIR = src
#══════════════════════════════  Colors  ══════════════════════════════════════#
WHITE	:= \033[37;1m
RESET	:= \033[0m
U_LINE	:= \033[4m
BLUE = \033[1;38;5;27m
#══════════════════════════════  Normas  ══════════════════════════════════════#
$(NAME): $(OBJS_FT) $(OBJS_PF) $(OBJS_GNL)
	@$(AR) $@ $(OBJS_FT) $(OBJS_PF) $(OBJS_GNL)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/*.h
	@mkdir -p $(OBJ_DIR)
	@mkdir -p $(OBJ_DIR)/ft
	@mkdir -p $(OBJ_DIR)/pf
	@mkdir -p $(OBJ_DIR)/gnl
	@echo "$(BLUE)LIBFT Compiling:$(RESET) $(notdir $<)"
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
#═══════════════════════════════  ARGS   ══════════════════════════════════════#
all: $(NAME)

show:
	@printf "NAME  	: $(NAME)\n"
	@printf "CC	: $(CC)\n"
	@printf "CFLAGS	: $(CFLAGS)\n"
	@printf "SRCS	:$(addprefix \n\t , $(notdir $(SRCS)))\n"$

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all show clean fclean re
