#include "header.h"

char	**ft_map(int y, int x, char *str)
{
	int i;
	int j;
	int k;
	char **map;

	i = 0;
	map = malloc((y + 1) * sizeof(char *));
	while (i < y)
		map[i++] = malloc((x + 1) * sizeof(char));
	map[i] = 0;
	i = 0;
	k = 0;
	j = -1;
	while (str[k])
	{
		if (j >= 0 && str[k] != '\n')
			map[j][i] = str[k];
		i++;
		if (str[k] == '\n')
		{
			if (j >= 0)
				map[j][i] = '\0';
			j++;
			i = 0;
		}
		k++;
	}
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
	file_desc = map_check(buff);
	if (!file_desc)
		return(0);
	else
	{
		i = 0;
		j = 0;
		while (buff[i])
			if (buff[i++] == '\n')
				j++;
		ft_map(j - 1, file_desc, buff);
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
