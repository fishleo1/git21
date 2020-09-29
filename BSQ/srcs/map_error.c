#include "header.h"

int	map_isprint(char *str)
{
  char *chars;

	chars = ft_chars(str);
  if (chars[0] < 32 || chars[0] == 127)
    return (0);
  if (chars[1] < 32 || chars[1] == 127)
    return (0);
  if (chars[2] < 32 || chars[2] == 127)
    return (0);
  return (1);
}

int	map_double(char *str)
{
	char *chars;

	chars = ft_chars(str);
  if (chars[0] == chars[1])
    return (0);
  if (chars[1] == chars[2])
    return (0);
  if (chars[2] == chars[0])
    return (0);
  return (1);
}

int	map_lines(char *str)
{
  int i;
  int j;
  int line;
  int line_i;

  i = 0;
  j = 0;
  line = 0;
  line_i = 0;
  while (str[i])
  {
    if (j == 1 && str[i] != '\n')
      line++;
    if (j > 0 && str[i] != '\n')
      line_i++;
    if (str[i] == '\n')
    {
      if (j > 0 && line_i != line)
	return (0);
      line_i = 0;
      j++;
    }
    i++;
  }
  return (line);
}

int	map_chars(char *str)
{
  int i;
  int j;
	int lines;
  char *chars;

  i = 0;
  j = 0;
	lines = map_lines(str) + 1;
	chars = ft_chars(str);
  while (j < lines)
  {
		if (str[i] == '\n')
      j++;
    if (j > 0 && str[i] > 31 && str[i] != 127)
      if (str[i] != chars[0] && str[i] != chars[1])
				return (0);
    i++;
  }
  return (1);
}

int	map_check(char *str)
{
	//printf("%d, %d, %d, %d\n", map_chars(str), map_lines(str), map_double(str), map_isprint(str));
  return (map_chars(str) * map_lines(str) * map_double(str) * map_isprint(str));
}
