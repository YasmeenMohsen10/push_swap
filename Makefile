NAME	= push_swap.a
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
LIBC	= ar rcs
RM	= rm -f

LIBFT_DIR 	= printf
LIBFT		= $(LIBFT_DIR)/libftprintf.a

SRC	= main.c helper.c error.c list.c
OBJS	= $(SRC:.c=.o)

all: $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)
$(NAME) : $(OBJS) $(LIBFT)
	rm -f $(NAME)
	cp $(LIBFT) $(NAME)
	$(LIBC) $(NAME) $(OBJS)
%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_DIR) clean
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean
re: fclean all

.PHONY: all clean fclean re
