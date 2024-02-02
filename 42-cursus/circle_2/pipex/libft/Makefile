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

#########################  Normas  #############################################
$(NAME): $(OBJS)
	$(AR) $@ $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/libft.h
	mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
