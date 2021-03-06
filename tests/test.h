# include <stdlib.h>
# include <stdio.h>
# include <string.h>
#include <fcntl.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdarg.h>

// Asm functions
ssize_t	ft_write(int fd, const void *buf, size_t count);
ssize_t	read(int fd, void *buf, size_t count);
size_t	ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strcpy(char *dist, const char *src);
char	*ft_strdup(const char *s1);

// Test functions on C
char	*get_random_string();
int		test_ft_strlen(int count);
int		test_ft_strcpy(int count);
int		test_ft_strcmp(int count);
int		test_ft_write(int count);
int		test_ft_strdup(int count);
int		test_ft_read();

// Test utils
void	error(char *reason);
int		is_number(char *str);
void	file_mode(int target, int backup);
void	stdout_mode(int backup);
int		fdprintf (int fd, size_t bufmax, const char * fmt, ...);