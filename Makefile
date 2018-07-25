# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: vde-sain <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2018/07/23 10:12:22 by vde-sain     #+#   ##    ##    #+#        #
#    Updated: 2018/07/23 12:18:31 by vde-sain    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME0 = BSQ
NAME1 = libft.a

SRC0 = srcs/ft_putchar.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strcat.c \
	   srcs/ft_strcpy.c \

SRC1 =

HDR =
HDR2 =

FLAGS = -Wall -Werror -Wextra

all: $(SRC0) $(SRC1) $(NAME0) $(NAME1)

clean:
	@rm -f *.o

flcean: clean
	@rm -f.o

re: fclean all
