NAME		=	libftprintf.a 

INCLUDES	=	include

LIBFT		= 	lib/libft/

HEADER		= 	include/ft_printf.h

SRC_DIR		=	src/

CC			=	cc

SRC			=	$(SRC_DIR)ft_find_type.c $(SRC_DIR)ft_printf.c $(SRC_DIR)ft_putstr.c \
				$(SRC_DIR)ft_putnbr.c $(SRC_DIR)ft_check_flags.c

CFLAG		=	-Wall -Wextra -Werror -I $(INCLUDES)

OBJ         =	$(SRC:%.c=%.o)

RM			=	rm -rf

AR			=	ar rcs

all:				$(NAME)

$(SRC_DIR)%.o:		$(SRC_DIR)%.c $(HEADER) Makefile
					$(CC) $(CFLAG) -c $< -o $@

$(NAME):			$(OBJ)
					make -C $(LIBFT)
					make -C $(LIBFT) bonus
					mv $(LIBFT)libft.a ././$(NAME)
					$(AR) $(NAME) $(OBJ)
clean:
					make -C $(LIBFT) clean
					$(RM) $(OBJ)

fclean: 			clean
					$(RM) $(NAME)

re:					fclean all

.PHONY: 			all clean fclean re bonus