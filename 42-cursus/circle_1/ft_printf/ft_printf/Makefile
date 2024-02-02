NAME = libftprintf.a
LIBFT = $(LIBFT_PATH)/libft.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
AR = ar rcs
RM = rm -rf

# addsuffix agrega .c en FILES
SRCS = $(addsuffix .c, $(FILES))
# addprefix agrega al directorio OBJ los archivos .c tranformados en .o
OBJS = $(addprefix $(OBJ_PATH)/, $(SRCS:.c=.o))

#########################  directorios(rutas)  #################################
LIBFT_PATH = ./libft
OBJ_PATH = ./obj
SRC_PATH = ./src
INC_PATH = ./inc

#########################  archivos del ft_printf  #############################
FILES = \
	ft_converter_csp\
	ft_converter_iduxo\
	ft_print_utilities\
	ft_printf_checker\
	ft_printf\

#########################  Colores  ############################################
R = \033[31;1m
G = \033[32;1m
B = \033[34;1m
M = \033[35;1m
C = \033[36;1m
Y = \033[33;1m
END = \033[0m

#########################  Normas  #############################################
$(NAME): $(OBJS)
	make bonus -C $(LIBFT_PATH)
	cp $(LIBFT) ./$@
	$(AR) $@ $(OBJS)
	@echo "\n$(G)[Compiled $(C)'$@' $(G)successfully]\n$(END)"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c $(INC_PATH)/ft_printf.h
	mkdir -p $(OBJ_PATH)
	$(CC) $(CFLAGS) -I $(INC_PATH) -c $< -o $@

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJ_PATH)
	make clean -C $(LIBFT_PATH)
	@echo "\n$(Y)[Cleaned $(C) $(NAME) objects $(Y)successfully]\n$(END)"

fclean: clean
	$(RM) $(NAME)
	make fclean -C $(LIBFT_PATH)
	@echo "$(R)[Removed $(C)'$(NAME)' $(R)successfully]\n$(END)"

re: fclean all

.PHONY: all clean fclean re
