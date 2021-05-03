#include "test.h"

int	test_ft_strcmp(int count)
{
	int	my_value;
	int	orig_value;
	char 	*str1;
	char 	*str2;
	int		i;
	int		correct;

	i = 0;
	correct = 1;
	while (i < count)
	{
		str1 = get_random_string();
		str2 = get_random_string();
		orig_value = strcmp(str1, str2);
		printf("str1      = |%s|\n", str1);
		printf("str2      = |%s|\n", str2);
		printf("strcmp    = |%d|\n", orig_value);
		my_value = ft_strcmp(str1, str2);

		printf("ft_strcmp = |%d|\n", my_value);
		printf("-----\n");
		if (orig_value != my_value)
			correct = 0;
		i++;
	}
	return (correct);
}