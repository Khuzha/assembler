#include "test.h"

int	main(int argc, char **argv)
{
	int count;
	int fd;

	if (!(fd = open("test.log", O_CREAT | O_WRONLY | O_TRUNC, 0655)))
		error("couldn't create log file");
	count = (argc == 2 && is_number(argv[1])) ?
		atoi(argv[1]) : 10;
	
	test_ft_strlen(count);
	printf("==============================\n");
	test_ft_strcpy(count);
	printf("==============================\n");
	test_ft_strcmp(count);
	printf("==============================\n");

	printf("finish\n");
	return (0);
}