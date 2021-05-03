NAME = tester.a
SRCS =	main.c random_string.c utils.c fdprintf.c \
		test_ft_strlen.c

SRCOBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCOBJS) test.h
		ar -rcs $(NAME) $(SRCOBJS) ../srcs/*.o
		gcc $(NAME)

clean:
	rm -f $(SRCOBJS)

fclean: clean
	rm -f $(NAME)

re: clean fclean all