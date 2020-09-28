#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define SIZE 4096

int	ft_bsq(char buff)
{
  
}

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
  /* if (!ft_map_error(buff))
	return(0);	*/
  /*i = 0;
  file_desc = 0;
  while (buff[i] != '\0')
  {
    if (buff[i] == '\n')
      file_desc++;
    i++;
  }
  printf("%d", file_desc);*/
  /*i = 0;
  while (buff[i + 3] != '\n')
    i++;
  if ((buff[i] - buff[i + 1])*(buff[i + 1] - buff[i + 2])*(buff[i] - buff[i + 2]))
  return (0);*/
  if (!ft_bsq(buff))
    return (0);
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
