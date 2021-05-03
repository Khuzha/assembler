#include "test.h"

char	*get_random_string()
{
	char	*str;
	int		length;

	srand(time(NULL));
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