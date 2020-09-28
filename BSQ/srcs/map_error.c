#include "header.h"

int	map_isprint(char *str)
{
  int i;
  int j;
  int line_0;

  i = 0;
  j = 0;
  line_0 = 0;
  while (str[i])
  {
    if (j == 0 && str[i] != '\n')
      line_0++;
    if (str[i] == '\n')
      j++;
    i++;
  }
  if (str[line_0 - 1] < 32 || str[line_0 - 1] == 127)
    return (0);
  if (str[line_0 - 2] < 32 || str[line_0 - 1] == 127)
    return (0);
  if (str[line_0 - 3] < 32 || str[line_0 - 1] == 127)
    return (0);
  return (1);
}

int	map_double(char *str)
{
  int i;
  int j;
  int line_0;

  i = 0;
  j = 0;
  line_0 = 0;
  while (str[i])
  {
    if (j == 0 && str[i] != '\n')
      line_0++;
    if (str[i] == '\n')
      j++;
    i++;
  }
  if (str[line_0 - 1] == str[line_0 - 2])
    return (0);
  if (str[line_0 - 2] == str[line_0 - 3])
    return (0);
  if (str[line_0 - 3] == str[line_0 - 1])
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
  int k;
  int line_0;

  i = 0;
  j = 0;
  line_0 = 0;
  while (str[i])
  {
    k = 3;
    if (j == 0 && str[i] != '\n')
      line_0++;
    if (j > 0 && str[i] != '\n')
    {
      if ((str[i] != str[line_0 - 1]) && (str[i] != str[line_0 - 2]) && (str[i] != str[line_0 - 3]))
        return (0);
    }
    if (str[i] == '\n')
      j++;
    i++;
  }
  return (1);
}

int	map_check(char *str)
{
  return (map_chars(str) * map_lines(str) * map_double(str) * map_isprint(str));
}
