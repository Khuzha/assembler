#include "test.h"

void	error(char *reason)
{
	printf("Exit: %s\n", reason);
	exit(1);
}

int		is_number(char *str)
{
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return (0);
		str++;
	}
	return (1);
}

void	file_mode(int fd)
{
	if (dup2(fd, 1) == -1)
		error("dup2 error");
}

void	stdout_mode()
{
	if (dup2(1, 1) == -1)
		error("dup2 error");
}