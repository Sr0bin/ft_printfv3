# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 20:33:05 by rorollin          #+#    #+#              #
#    Updated: 2025/01/29 11:10:34 by rorollin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

#SOURCES######################

SOURCES_DIR = src

SOURCES_NAME = ft_printf.c ft_print_d.c ft_print_p.c ft_print_x_upper.c ft_print_x.c  \
			   ft_print_i.c ft_print_s.c ft_print_u.c ft_print_c.c ft_parser.c ft_format.c

SOURCES = $(addprefix $(SOURCES_DIR)/, $(SOURCES_NAME))


#OBJECTS#######################

OBJ_DIR = obj

OBJECTS = $(addprefix $(OBJ_DIR)/,$(SOURCES_NAME:.c=.o))

#INCLUDES#######################

HEADERS_DIR = include/ libft/ 

HEADERS_NAME = ft_printf.h

HEADERS = $(addprefix include/, $(HEADERS_NAME))

INCLUDES = $(addprefix -I , $(HEADERS_DIR))

#LIBFT########################

LIBFT = libft

#COMPILER#####################

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror -ggdb
ARCHIVER = ar

all: make_libft $(NAME)

$(NAME): $(LIBFT)/$(LIBFT).a $(OBJECTS)
	@cp $(LIBFT)/$(LIBFT).a $(NAME)	
	@$(ARCHIVER) -rcs $@ $(OBJECTS)
	@echo "$(NAME) built succesfully."

$(OBJ_DIR):
	@mkdir $@

$(OBJ_DIR)/%.o: $(SOURCES_DIR)/%.c $(HEADERS) | $(OBJ_DIR) 
	$(COMPILER) $(CFLAGS) $(INCLUDES) -c $< -o $@

make_libft:
	@$(MAKE) -s -C $(LIBFT) bonus

clean:
	@$(MAKE) -s -C $(LIBFT) clean
	@rm -rf $(OBJ_DIR)
	@rm -f .bonus
	@echo "Cleaned !"

fclean:
	@$(MAKE) -C $(LIBFT) fclean
	@$(MAKE) clean
	@rm -f $(NAME)
	@echo "Fcleaned !"

re:	
	$(MAKE) clean 
	$(MAKE) all

##############################

test: all
	$(COMPILER) $(CFLAGS) $(INCLUDES) main.c $(NAME)

##############################

.PHONY: all clean fclean re make_libft test
