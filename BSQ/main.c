#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define SIZE 4096

/* error_check.c */

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
      line++; //getting length of 1st line
    if (j > 0 && str[i] != '\n')
      line_i++; //getting length of each line
    if (str[i] == '\n') //every end of every line condition
    {
      if (j > 0 && line_i != line) //if lengths not equal
	return (0);
      line_i = 0;
      j++;
    }
    i++;
  }
  return (1);
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

/*
int	ft_map_check(char *str)
{
  int i;
  int j;
  int k;
  int line;
  int line_0;
  int line_i;

  i = 0;
  j = 0;
  line = 0;
  line_0 = 0;
  line_i = 0;
  
  while (str[i])
  {
    k = 3;
    if (j == 0 && str[i] != '\n')
      line_0++;
    if (j == 1 && str[i] != '\n')
      line++; //getting length of 1st line
    if (j > 0 && str[i] != '\n')
    {
      if (str[i] != str[line_0 - 1])
	k--;
      if (str[i] != str[line_0 - 2])
        k--;
      if (str[i] != str[line_0 - 3])
        k--;
      if (k == 0)
	return (0);
      line_i++; //getting length of each line
    }
    if (str[i] == '\n') //every end of every line condition
    {
      printf("line: %d, line_i: %d, j: %d\n", line, line_i, j);
      if (j > 0 && line_i != line) //if lengths not equal
	return(0);
      line_i = 0;
      j++;
    }
    i++;
  }
  
  if (str[line_0 - 1] == str[line_0 - 2])
    return (0);
  if (str[line_0 - 2] == str[line_0 - 3])
    return (0);
  if (str[line_0 - 3] == str[line_0 - 1])
    return (0);
  
  while (j != 0)
  {
    line_0--;
    j /= 10;
  }
  if (line_0 != 3)
    return (0);
  
  return (1);
}
*/

int	map_check(char *str)
{
  return (map_chars(str) * map_lines(str) * map_double(str));
}

/* end of error_check.c */

int	ft_open(char *str)
{
  int file_desc;
  int i;
  char buff[SIZE];

  file_desc = open(str, O_RDONLY);
  if (file_desc < 0)
    return (0);

  while ((i = read(file_desc, buff, SIZE)) > 0);

  close(file_desc);

  if (!map_check(buff))
	return(0);
  else
    printf("Map is ok");
  return (1);
}

int	main(int argc, char *argv[])
{
  int i;

  i = 1;
  while (i < argc)
  {
    if (!ft_open(argv[i]))
      printf("Map error\n");
    else
      printf("\n");
    i++;
  }
  return (0);
}
