# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccline <ccline@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/07 06:53:29 by ccline            #+#    #+#              #
#    Updated: 2019/10/07 07:40:46 by ccline           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS += -Wall -Wextra -Werror -I./include

SOURCE =	ft_memset ft_bzero ft_memcpy ft_memccpy ft_memmove ft_memchr ft_memcmp ft_strlen\
			ft_strdup ft_strcpy ft_strncpy ft_strcat ft_strncat ft_strlcat ft_strchr\
			ft_strrchr ft_strstr ft_strnstr ft_strcmp ft_strncmp ft_atoi ft_isalpha\
			ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower ft_memalloc\
			ft_memdel ft_strnew ft_strdel ft_strclr ft_striter ft_striteri ft_strmap ft_strmapi\
			ft_strequ ft_strnequ ft_strsub ft_strjoin ft_strtrim ft_strsplit ft_itoa\
			ft_putchar ft_putstr ft_putendl ft_putnbr ft_putchar_fd ft_putstr_fd\
			ft_putendl_fd ft_putnbr_fd ft_lstnew ft_lstdelone ft_lstdel ft_lstadd\
			ft_lstiter ft_lstmap ft_isspace ft_strwrdcnt ft_strclen ft_intsize ft_islower\

CFILES = $(addsuffix .c, $(SOURCE))
OFILES = $(addsuffix .o, $(SOURCE))

$(NAME): libft.h
	@gcc $(FLAGS) -c $(CFILES)
	@ar rc $(NAME) $(OFILES)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@/bin/rm -f $(OFILES)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
