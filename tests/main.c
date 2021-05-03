#include "test.h"

int	main(int argc, char **argv)
{
	int count;
	int fd;

	if (!(fd = open("test.log", O_CREAT | O_WRONLY | O_TRUNC, 0655)))
		error("couldn't create log file");
	count = (argc == 2 && is_number(argv[1])) ?
		atoi(argv[1]) : 10;

	if (dup2(fd, 1) == -1)
		error("dup2 error");
	test_ft_strlen(count, fd);
	if (dup2(1, fd) == -1)
		error("dup2 error");

	printf("ok\n");
	return (0);
}