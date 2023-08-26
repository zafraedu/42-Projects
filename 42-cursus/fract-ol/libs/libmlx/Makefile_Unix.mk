# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile_Unix.mk                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zafraedu <zafraedu@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/26 21:36:38 by W2Wizard          #+#    #+#              #
#    Updated: 2023/08/18 01:42:29 by zafraedu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#//= Colors =//#
RED		:= \033[31;1m
GREEN	:= \033[32;1m
WHITE	:= \033[37;1m
RESET	:= \033[0m
U_LINE	:= \033[4m
BLUE = \033[1;38;5;27m

#//= Make Rules =//#
$(NAME): $(OBJS)
	@ar rc $@ $^
	@echo "\n$(WHITE)$(U_LINE)  MLX42: Compiled $(RESET)\n"

%.o: %.c $(HDRS)
	@echo "$(BLUE)MLX Compiling:$(RESET) $(notdir $<)"
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)

# Convert shaders to .c files
$(SRC_DIR)/mlx_%_shader.c: $(SHADER_DIR)/default.%
#	@echo "$(GREEN)$(BOLD)Shader to C: $< -> $@$(RESET)"
	@bash tools/compile_shader.sh $< > $@

clean:
	@echo "$(RED)Cleaning...$(RESET)"
	@rm -f $(OBJS) $(SHDR)

fclean: clean
	@rm -f $(NAME)
