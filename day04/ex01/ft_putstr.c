#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int i;

	while (str[i])
	{
		i++;
	}
	write(1, str, i);
}