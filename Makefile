NAME	=	libftprintf.a

CC		=	cc

CFLAGS	=	-Wall -Werror -Wextra

SRC		=	ft_printf.c \
			ft_printf_spellbook[1].c \
			ft_printf_spellbook[2].c

OBJ 	=	$(SRC:.c=.o)

LIBFDIR	=	./printf_libft
LIBFT	=	$(LIBFDIR)/libft.a

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)

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