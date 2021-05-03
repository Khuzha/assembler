#include "test.h"

int	test_ft_strdup(int count)
{
	char	*my_value;
	char	*orig_value;
	char	*str;
	int	i;
	int correct;

	i = 0;
	correct = 1;
	while (i < count)
	{
		str = get_random_string();
		orig_value = strdup(str);
		printf("TEST NO %d OF %d\n", i + 1, count);
		my_value = ft_strdup(str);
		printf("ft_strdup = |%s|\n", my_value);
		printf("strdup    = |%s|\n", orig_value);
		printf("-----\n");
		if (strcmp(orig_value, my_value))
			correct = 0;
		i++;
	}

	return correct;
}