NAME	=	libft.a

SRCS	=	my_atoi.c \
		my_bzero.c \
		my_calloc.c \
		my_isalnum.c \
		my_isalpha.c \
		my_isascii.c \
		my_isdigit.c \
		my_isprint.c \
		my_itoa.c \
		my_memchr.c \
		my_memcmp.c \
		my_memcpy.c \
		my_memmove.c \
		my_memset.c \
		my_putchar_fd.c \
		my_putendl_fd.c \
		my_putnbr_fd.c \
		my_putstr_fd.c \
		my_split.c \
		my_strchr.c \
		my_strdup.c \
		my_striteri.c \
		my_strjoin.c \
		my_strlcat.c \
		my_strlcpy.c \
		my_strlen.c \
		my_strmapi.c \
		my_strncmp.c \
		my_strnstr.c \
		my_strrchr.c \
		my_strtrim.c \
		my_substr.c \
		my_tolower.c \
		my_toupper.c

SRCS_BONUS 	=	my_lstadd_back_bonus.c \
			my_lstadd_front_bonus.c \
			my_lstclear_bonus.c \
			my_lstdelone_bonus.c \
			my_lstiter_bonus.c \
			my_lstlast_bonus.c \
			my_lstmap_bonus.c \
			my_lstnew_bonus.c \
			my_lstsize_bonus.c
		
OBJS	=	$(SRCS:.c=.o)

OBJS_BONUS	=	$(SRCS_BONUS:.c=.o)

CC	=	cc

CFLAGS	=	-Wall -Werror -Wextra

RM	=	rm -rf 

all: $(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

.c.o:
		$(CC) $(CFLAGS) -c $<

clean:
		$(RM) $(OBJS) $(OBJS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

bonus: $(OBJS) $(OBJS_BONUS)
		ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

.PHONY: all clean fclean re bonus
