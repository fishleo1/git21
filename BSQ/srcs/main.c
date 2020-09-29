#include "header.h"

char	*ft_chars(char *str)
{
	int i;
	char *chars;

	i = 0;
	chars = malloc(4 * sizeof(char));
	while (str[i + 1] != '\n')
		i++;
	chars[0] = str[i - 2];
	chars[1] = str[i - 1];
	chars[2] = str[i];
	chars[3] = '\0';
	return (chars);
}

char	**ft_map(int y, int x, char *str, char *chars)
{
	int i;
	int j;
	int k;
	int max[3];
	char **map;
	int **index;

	//malloc map
	i = 0;
	map = malloc((y + 1) * sizeof(char *));
	while (i < y)
		map[i++] = malloc((x + 1) * sizeof(char));
	map[i] = 0;
	//copy map
	i = 0;
	k = 0;
	j = -1;
	while (j < y)
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
	//malloc index table
	i = 0;
	index = malloc((y) * sizeof(int *));
	while (i < y)
		index[i++] = malloc((x) * sizeof(int));
	//make index table
	i = 0;
	j = 0;
	max[2] = 0;
	while (map[i])
	{
		j = 0;
		while (map[i][j])
		{
			if (map[i][j] == chars[1])
				index[i][j] = 0;
			else if (map[i][j] == chars[0] && i > 0 && j > 0)
			{
				k = index[i - 1][j - 1];
				if (index[i - 1][j] < k)
					k = index[i - 1][j];
				if (index[i][j - 1] < k)
					k = index[i][j - 1];
				index[i][j] = k + 1;
				if (k + 1 > max[2])
				{
					max[2] = k + 1;
					max[0] = i - max[2] + 1;
					max[1] = j - max[2] + 1;
					//printf("Max: %d, i: %d, j: %d\n", max[2], max[0], max[1]);
				}
			}
			else
				index[i][j] = 1;
			j++;
		}
		i++;
	}
	/*
	//print index table
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
			printf("%d__", index[i][j++]);
		printf("\n");
		i++;
	}
	*/

	//insert square
	i = max[0];
	j = max[1];
	while (i < max[0] + max[2])
	{
		j = max[1];
		while (j < max[1] + max[2])
		{
			map[i][j] = chars[2];
			j++;
		}
		i++;
	}
	free(index);
	//print xxx-ed map
	i = 0;
	while (map[i])
		printf("%s\n", map[i++]);
	free(map);
	return (0);
}

int	ft_open(char *str)
{
	int file_desc;
	int i;
	int j;
	static char buff[SIZE];

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
		//printf("%d, %d, %s\n", j - 1, file_desc, ft_chars(buff));
		ft_map(j - 1, file_desc, buff, ft_chars(buff));
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
		if (i != argc - 1)
			printf("\n");
    i++;
  }
  return (0);
}
