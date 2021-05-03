#include "test.h"

int	test_ft_strlen(int count)
{
	size_t	my_value;
	size_t	orig_value;
	char 	*str;
	int		i;
	int		correct;

	i = 0;
	correct = 1;
	while (i < count)
	{
		str = get_random_string();
		orig_value = strlen(str);
		my_value = ft_strlen(str);
		printf("str       = |%s|\n", str);
		printf("strlen    = |%lu|\n", orig_value);
		printf("ft_strlen = |%lu|\n", my_value);
		printf("-----\n");
		if (orig_value != my_value)
			correct = 0;
		i++;
	}
	return (correct);
}