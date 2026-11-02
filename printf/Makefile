NAME	= libftprintf.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar rcs
RM	= rm -f

LIBFT_DIR 	= libft
LIBFT		= $(LIBFT_DIR)/libft.a

SRC	= ft_printf.c ft_puthex.c ft_putnbr.c ft_putchar.c ft_put_pointer.c ft_putstr.c ft_put_unsigned.c
OBJS	= $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
$(NAME) : $(OBJS) $(LIBFT)
	rm -f $(NAME)
	cp $(LIBFT) $(NAME)
	$(LIBC) $(NAME) $(OBJS)
%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
re: fclean all

.PHONY: all clean fclean re
