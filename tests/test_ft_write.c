#include "test.h"

int	test_ft_write(int count)
{
	ssize_t my_value;
	ssize_t orig_value;
	char	*str;
	size_t	len;
	int fd;
	int	i;
	int correct;

	i = 0;
	correct = 1;
	if (!(fd = open("test.write", O_CREAT | O_WRONLY | O_TRUNC, 0655)))
		error("couldn't create log file");
	while (i < count)
	{
		str = get_random_string();
		len = strlen(str);
		my_value = ft_write(fd, str, len);
		orig_value = write(fd, str, len);
		printf("ft_write = %lu\n", my_value);
		printf("write    = %lu\n", orig_value);
		printf("-----\n");
		if (orig_value != my_value)
			correct = 0;
		i++;
	}

	return correct;
}