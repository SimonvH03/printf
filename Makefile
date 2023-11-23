NAME	=	libftprintf.a

CC		=	cc

CFLAGS	=	-Wall -Werror -Wextra

SRC		=	ft_printf.c \
			ft_printf_spellbook.c

OBJ 	=	$(SRC:.c=.o)

LIBFDIR	=	./printf_libft
LIBFT	=	$(LIBFDIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(LIBFT) $(OBJ)

$(LIBFT):
	make -C $(LIBFDIR) all

clean:
	make -C $(LIBFDIR) clean
	rm -f $(OBJ)

fclean: clean
	make -C $(LIBFDIR) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re