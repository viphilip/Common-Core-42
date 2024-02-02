# ***************************************************************************** #
#                                                                               #
#                                                         :::      ::::::::     #
#    Makefile                                           :+:      :+:    :+:     #
#                                                     +:+ +:+         +:+       #
#    By: viphilip <viphilip@student.42.fr>          +#+  +:+       +#+          #
#                                                 +#+#+#+#+#+   +#+             #
#    Created: 2023/11/16 14:58:13 by viphilip          #+#    #+#               #
#    Updated: 2023/11/21 16:36:41 by viphilip         ###   ########.fr         #
#                                                                               #
# ******************************************************************************#

################################## Compilation ##################################

CFLAGS		= -Wall -Werror -Wextra
CC			= cc $(CFLAGS)

##################################### Alias #####################################

RM = rm -f
AR = ar -rcs

##################################### Files #####################################

NAME		= libft.a

SRC			= ft_atoi.c     ft_isprint.c  ft_putchar_fd.c  ft_striteri.c  ft_strnstr.c \
			  ft_bzero.c    ft_itoa.c     ft_putendl_fd.c  ft_strjoin.c   ft_strrchr.c \
			  ft_calloc.c   ft_memchr.c   ft_putnbr_fd.c   ft_strlcat.c   ft_strtrim.c \
			  ft_isalnum.c  ft_memcmp.c   ft_putstr_fd.c   ft_strlcpy.c   ft_substr.c  \
			  ft_isalpha.c  ft_memcpy.c   ft_split.c       ft_strlen.c    ft_tolower.c \
			  ft_isascii.c  ft_memmove.c  ft_strchr.c      ft_strmapi.c   ft_toupper.c \
			  ft_isdigit.c  ft_memset.c   ft_strdup.c      ft_strncmp.c                \
			  ft_lstadd_back_bonus.c      ft_lstdelone_bonus.c  ft_lstnew_bonus.c      \
			  ft_lstadd_front_bonus.c     ft_lstlast_bonus.c    ft_lstsize_bonus.c     \
			  ft_lstclear_bonus.c		  ft_lstiter_bonus.c    ft_lstmap_bonus.c 	   \
			  print_converter/print_c.c   print_converter/print_s.c		               \
			  print_converter/print_p.c   print_converter/print_d_i.c	               \
			  print_converter/print_u.c   print_converter/print_x.c	                   \
			  print_converter/print_xu.c  basic_ft/convert_check.c	                   \
			  basic_ft/count_nb.c		  basic_ft/is_flag.c                           \
			  ft_printf.c

OBJ			= $(SRC:.c=.o)

HEADERS		= libft.h 

#################################### Commands ###################################

all: $(NAME)

$(NAME): $(OBJ) 
	$(AR) $(NAME) -o $@ $^

%.o: %.c $(HEADERS) Makefile
	$(CC) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean 
	$(MAKE) all

.PHONY: all clean fclean re
