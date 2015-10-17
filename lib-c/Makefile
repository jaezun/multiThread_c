#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhyun <jhyun@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/21 11:06:44 by jhyun             #+#    #+#              #
#    Updated: 2013/11/25 16:53:02 by jhyun            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME 		= 	libft.a
	
DIRSRC		= 	./srcs/
DIROBJ		= 	./objs/
	
OBJ			= 	$(SRC:.c=.o)
DIROBJS		=	$(addprefix $(DIROBJ), $(OBJ))
	
CC			= 	clang
AC			= 	ar rc
RL			= 	ranlib
CFLAGS		= 	-Wall -Wextra -Werror

HEAD		= 	-I ./includes
SRC 		=	ft_atoi.c 			\
				ft_bzero.c 			\
				ft_isalnum.c 		\
				ft_isalpha.c 		\
				ft_isascii.c 		\
				ft_isdigit.c 		\
				ft_islower.c 		\
				ft_isprint.c 		\
				ft_isspace.c 		\
				ft_isupper.c 		\
				ft_memalloc.c 		\
				ft_memchr.c 		\
				ft_memcmp.c 		\
				ft_memccpy.c 		\
				ft_memcpy.c 		\
				ft_memdel.c 		\
				ft_memmove.c 		\
				ft_memset.c 		\
				ft_putchar.c 		\
				ft_putchar_fd.c	 	\
				ft_putendl.c 		\
				ft_putendl_fd.c	 	\
				ft_putnbr.c 		\
				ft_putnbr_fd.c 		\
				ft_putstr.c 		\
				ft_putstr_fd.c 		\
				ft_strlen.c 		\
				ft_strcat.c 		\
				ft_strlcat.c 		\
				ft_strncat.c 		\
				ft_strchr.c 		\
				ft_strrchr.c 		\
				ft_strcmp.c 		\
				ft_strncmp.c 		\
				ft_strcpy.c 		\
				ft_strdel.c 		\
				ft_strdup.c 		\
				ft_strncpy.c 		\
				ft_strnew.c 		\
				ft_strnstr.c 		\
				ft_strstr.c 		\
				ft_tolower.c 		\
				ft_toupper.c 		\
				ft_strclr.c 		\
				ft_striter.c 		\
				ft_striteri.c 		\
				ft_strmap.c 		\
				ft_strmapi.c 		\
				ft_strequ.c 		\
				ft_strnequ.c 		\
				ft_strsub.c 		\
				ft_strjoin.c 		\
				ft_strtrim.c 		\
				ft_itoa.c 			\
				ft_strsplit.c 		\
				ft_lstnew.c 		\
				ft_lstadd.c 		\
				ft_lstdelone.c 		\
				ft_lstdel.c 		\
				ft_lstiter.c 		\
				ft_lstmap.c


all: 			$(NAME)
	
$(NAME):		$(DIROBJS)
				@echo "Création de la librairie libft..."
				@$(AC) $(NAME) $(DIROBJS)
				@$(RL) $(NAME)

$(DIROBJ)%.o:	$(DIRSRC)%.c
				@mkdir -p objs
				@$(CC) $(CFLAGS) -c $^ $(HEAD) -o $@
	
clean:
				@rm -rf $(DIROBJ)
	
fclean: 		clean
				@rm -rf libft.a
				@echo "Cleaning..."
	
re: 			fclean all
	
.PHONY:			all clean fclean re
