#include "test.h"



void	test_ft_strlen(int count, int fd)
{
	int i;

	fd++;
	i = 0;
	while (i < count)
	{
		char *str = get_random_string();
		// write(fd, str, strlen(str));
		printf("str = |%s|\n", str);
		printf("strlen = %lu\n", strlen(str));
		printf("ft_strlen = %lu\n", ft_strlen(str));
		printf("-----\n");
		i++;
	}
}