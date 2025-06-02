NAME := libft.a
CC := gcc
CFLAGS := -Wall -Wextra -Werror -Iincludes

SRCS := Part_1/ft_atoi.c Part_1/ft_bzero.c Part_1/ft_isalnum.c Part_1/ft_isalpha.c Part_1/ft_isascii.c Part_1/ft_isdigit.c Part_1/ft_isprint.c Part_1/ft_memchr.c Part_1/ft_memcpy.c Part_1/ft_memmove.c Part_1/ft_memset.c Part_1/ft_strchr.c Part_1/ft_strlcpy.c Part_1/ft_strlen.c Part_1/ft_strnstr.c Part_1/ft_strrchr.c Part_1/ft_tolower.c Part_1/ft_toupper.c Part_1/ft_strlcat.c

OBJS := $(SRCS:Part_1/%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: Part_1/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

