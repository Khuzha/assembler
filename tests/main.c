#include "test.h"

int	main(int argc, char **argv)
{
	int count;
	int fd;
	int	stdout;

	if (!(fd = open("test.log", O_CREAT | O_WRONLY | O_TRUNC, 0655)))
		error("couldn't create log file");
	count = (argc == 2 && is_number(argv[1])) ?
		atoi(argv[1]) : 10;
	
	stdout = 1;
	file_mode(fd, stdout);
	test_ft_strlen(count);
	stdout_mode(stdout);

	printf("finish\n");
	return (0);
}