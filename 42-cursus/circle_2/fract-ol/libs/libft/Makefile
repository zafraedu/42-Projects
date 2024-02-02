NAME = libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf

# busca todos los archivos .c en la carpeta src
SRCS = $(wildcard $(SRC_DIR)/*.c)
# reemplaza la ruta src por obj y cambia la extensión .c a .o
OBJS = $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

#########################  directorios(rutas)  #################################
OBJ_DIR = obj
SRC_DIR = src
INC_DIR = inc

#########################  Colors  #############################################
WHITE	:= \033[37;1m
RESET	:= \033[0m
U_LINE	:= \033[4m
BLUE = \033[1;38;5;27m

#########################  Normas  #############################################
$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)
	@echo "\n$(WHITE)$(U_LINE) LIBFT: Compiled $(RESET)\n"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/*.h
	mkdir -p $(OBJ_DIR)
	@echo "$(BLUE)LIBFT Compiling:$(RESET) $(notdir $<)"
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
