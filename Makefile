NAME = push_swap

SRCS =  push_swap.c \
		push_swap_utils.c \
		controls.c \
		sorted_list.c \
		sorting.c \
		sorting_utils.c \
		swap.c \
		push.c \
		r_rotate.c \
		rotate.c \
		radix.c

OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iincludes
RM = rm -rf

all: $(NAME)
$(NAME): $(OBJS)
	make bonus -C ./libft
	$(CC) $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

clean: 
	make -C ./libft fclean
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re