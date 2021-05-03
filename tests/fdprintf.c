#include "test.h"

int	fdprintf (int fd, size_t bufmax, const char * fmt, ...)
{
  char * buffer;
  int n;
  va_list ap;

  buffer = (char *)malloc(bufmax);
  if (!buffer)
    return 0;

  va_start(ap, fmt);
  n = vsnprintf(buffer, bufmax, fmt, ap);
  va_end(ap);

  write(fd, buffer, n);
  free(buffer);
  return n;
}