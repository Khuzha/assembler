#include "test.h"

void	test_ft_strlen(int count, int fd)
{
	int i;

	i = 0;
	while (i < count)
	{
		char *str = get_random_string();
		write(fd, str, strlen(str));
		// write()
		printf("strlen = %lu\n", strlen(str));
		printf("ft_strlen = %lu\n", ft_strlen(str));
		printf("-----\n");
		i++;
	}
	printf("result = %lu\n", ft_strlen("sardor"));

}