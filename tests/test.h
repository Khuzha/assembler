# include <stdlib.h>
# include <stdio.h>
# include <string.h>
#include <fcntl.h>
#include <time.h>
#include <unistd.h>

// Asm functions
size_t	ft_strlen(const char *s);


// Test functions on C
char	*get_random_string();
void	test_ft_strlen(int count, int fd);

// Test utils
void	error(char *reason);
int		is_number(char *str);