#include "test.h"

int	test_ft_strcpy(int count)
{
	char	*my_value;
	char	*orig_value;
	char	*dist1;
	char	*dist2;
	char 	*str;
	int		i;
	int		correct;

	i = 0;
	correct = 1;
	while (i < count)
	{
		str = get_random_string();
		dist1 = malloc(strlen(str));
		dist2 = malloc(strlen(str));
		orig_value = strcpy(dist1, str);
		my_value = ft_strcpy(dist2, str);
		printf("str       = |%s|\n", str);
		printf("strcpy    = |%s|\n", orig_value);
		printf("ft_strcpy = |%s|\n", my_value);
		printf("-----\n");
		if (strcmp(orig_value, my_value))
			correct = 0;
		i++;
	}
	return (correct);
}