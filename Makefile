NAME	=	libft.a

SRCS	=	<functions>

OBJS	=	$(SRC:.c=.o)

CC	=	gcc

CFLAGS	=	-Wall -Werror -Wextra

RM	=	rm -f

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

.c.o:
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS) $(NAME)

re: fclean all

.PHONY: all clean fclean re
