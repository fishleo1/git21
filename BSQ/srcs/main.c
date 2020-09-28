#include "header.h"

char	**ft_map(int y, int x, char *str)
{
	int i;
	char **map;

	(void)str;
	i = 0;
	map = malloc((y + 1) * sizeof(char *));
	while (i < y)
	{
		map[i] = malloc((x + 1) * sizeof(char));
		i++;
	}
	map[i] = 0;
	return (0);
}

int	ft_open(char *str)
{
	int file_desc;
	int i;
	int j;
	char buff[SIZE];

	file_desc = open(str, O_RDONLY);
	if (file_desc < 0)
		return (0);
	while ((i = read(file_desc, buff, SIZE)) > 0);
	close(file_desc);
	if (!map_check(buff))
		return(0);
	else
	{
		j = 0;
		while (*str)
		{
			if (*str == '\n')
				j++;
			str++;
		}
		ft_map(j - 1, map_lines(str), str);
	}
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
