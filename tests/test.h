# include <stdlib.h>
# include <stdio.h>
# include <string.h>
#include <fcntl.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdarg.h>

// Asm functions
size_t	ft_strlen(const char *s);


// Test functions on C
char	*get_random_string();
int	test_ft_strlen(int count);

// Test utils
void	error(char *reason);
int		is_number(char *str);
void	file_mode(int target, int backup);
void	stdout_mode(int backup);
int		fdprintf (int fd, size_t bufmax, const char * fmt, ...);