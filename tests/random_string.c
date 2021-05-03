#include "test.h"

long	get_time()
{
		struct timeval time;
		gettimeofday(&time, NULL);
		return (time.tv_usec);
}

char	*get_random_string()
{
	char	*str;
	int		length;

	srand(get_time());
	length = rand() % 256;
	str = malloc(sizeof(char) * (length + 1));
	str[length] = '\0';
	while (length != 0)
	{
		str[length - 1] = (char)(rand() % (127 - 32) + 32);
		length--;
	}
	return (str);
}