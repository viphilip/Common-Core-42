# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/13 15:54:05 by viphilip          #+#    #+#              #
#    Updated: 2024/03/13 11:05:51 by viphilip         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#------------------------------------------------------------------------------#
#              ____  __  _______ __  __   ______       _____    ____           #
#             / __ \/ / / / ___// / / /  / ___/ |     / /   |  / __ \          #
#            / /_/ / / / /\__ \/ /_/ /   \__ \| | /| / / /| | / /_/ /          #
#           / ____/ /_/ /___/ / __  /   ___/ /| |/ |/ / ___ |/ ____/           #
#          /_/    \____//____/_/ /_/   /____/ |__/|__/_/  |_/_/                #
#																			   #
#--------------------------------- COMPILATION --------------------------------#

CFLAGS		= -Wall -Werror -Wextra 
CC			= cc $(CFLAGS)

#------------------------------------ ALIAS -----------------------------------#

RM = rm -f
LIBFT = -L Libft/ -lft

#------------------------------------ FILES -----------------------------------#

NAME		= push_swap

SRC			= Push_swap/Instructions/push.c							\
			  Push_swap/Instructions/swap.c							\
			  Push_swap/Instructions/rotate.c						\
			  Push_swap/Error_Management/check_error.c				\
			  Push_swap/Error_Management/check_error_utils.c		\
			  Push_swap/Stack_init/stack_init.c						\
			  Push_swap/Stack_init/fill_stack.c						\
			  Push_swap/Stack_init/stack_init_utils.c				\
			  Push_swap/Algorithms/sort.c							\
			  Push_swap/Algorithms/is_sorted.c						\
			  Push_swap/Algorithms/sort_three.c						\
			  Push_swap/Utils/ft_atol.c								\
			  Push_swap/Utils/lstnew.c								\
			  Push_swap/Utils/stack_len.c							\
			  Push_swap/Utils/nodes_finder.c						\
			  Push_swap/Utils/free.c								\
			  Push_swap/main.c


OBJ			= $(SRC:.c=.o)

HEADERS		= Push_swap/push_swap.h 

#################################### Commands ###################################

all: libs $(NAME)

libs: 
	$(MAKE) -C Libft/

$(NAME): $(OBJ)
	@$(MAKE) -C Libft/
	$(CC) -o $@ $^ $(LIBFT)
	

%.o: %.c $(HEADERS) Makefile
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ)
	@$(MAKE) -C Libft/ clean

fclean: clean
	$(RM) $(NAME)
	@$(MAKE) -C Libft/ fclean

re: fclean 
	$(MAKE) all

.PHONY: all clean fclean re