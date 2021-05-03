NAME = tester.a
SRCS =	main.c random_string.c utils.c fdprintf.c \
		test_ft_strlen.c test_ft_strcpy.c test_ft_strcmp.c \
		test_ft_write.c test_ft_read.c \
		test_ft_strdup.c

SRCOBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(SRCOBJS) test.h
		ar -rcs $(NAME) $(SRCOBJS) ../srcs/*.o
		gcc $(NAME)

clean:
	rm -f $(SRCOBJS)
	rm -f srcs/*.o

fclean: clean
	rm -f $(NAME)

re: clean fclean all