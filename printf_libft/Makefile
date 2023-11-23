NAME		=	libft.a

CFLAGS		=	-Wall -Werror -Wextra

SRC			=	ft_putchar.c \
				ft_putnbr_base.c \
				ft_putnbr.c \
				ft_putpointer.c \
				ft_putstr.c \
				ft_strlen.c \

OBJ			=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re