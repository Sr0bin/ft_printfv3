#llu **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/13 20:33:05 by rorollin          #+#    #+#              #
#    Updated: 2024/11/25 20:27:01 by rorollin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
		  ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_toupper.c\
		  ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c\
		  ft_memcmp.c ft_strnstr.c ft_atoi.c ft_memmove.c ft_calloc.c\
		  ft_strdup.c ft_strnstr.c ft_strlcat.c ft_strlcpy.c ft_substr.c\
		  ft_strjoin.c ft_strtrim.c ft_split.c ft_strmapi.c ft_striteri.c\
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\
		  ft_itoa.c ft_valid_base.c ft_issign.c ft_putnbr_base_fd.c \
		  ft_uputnbr_base_fd.c

SOURCES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c\
				ft_lstmap.c



OBJ_DIR = obj

OBJECTS = $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))

OBJECTS_BONUS = $(addprefix $(OBJ_DIR)/,$(SOURCES_BONUS:.c=.o))


HDR = libft.h

COMPILER = cc
CFLAGS = -Wall -Wextra -Werror -ggdb
ARCHIVER = ar

all: $(NAME)

$(NAME): $(OBJECTS)
	$(ARCHIVER) -rcs $@ $^

$(OBJ_DIR):
	mkdir $@

$(OBJ_DIR)/%.o: %.c $(HDR) | $(OBJ_DIR) 
	$(COMPILER) $(CFLAGS) -c $< -o $@

bonus: $(OBJECTS_BONUS) $(NAME) 
	$(ARCHIVER) -rcs $(NAME) $(OBJECTS_BONUS)
	touch bonus

clean:
	rm -rf $(OBJ_DIR)
	rm -f bonus

fclean:
	$(MAKE) clean
	rm -f $(NAME)

re:	
	$(MAKE) clean 
	$(MAKE) all

.PHONY: all clean fclean re 
