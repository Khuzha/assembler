#include "test.h"

int	test_ft_read()
{
	ssize_t my_value;
	ssize_t orig_value;
	char	*str1;
	char	*str2;
	size_t	len;
	int fd;
	int	i;

	i = 0;
	if (!(fd = open("main.c", O_RDONLY)))
		error("couldn't create log file");
	len = rand() % 256;
	str1 = calloc(sizeof(char) * len, len);
	str2 = calloc(sizeof(char) * len, len);
	orig_value = write(fd, str2, len);
	my_value = ft_write(fd, str1, len);
	printf("TEST NO 1 OF 1\n");
	printf("ft_read = %lu\n", my_value);
	printf("read    = %lu\n", orig_value);
	printf("-----\n");
	free(str1);
	free(str2);
	return (orig_value == my_value);
}