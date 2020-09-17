
#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		ft_str_is_lowercase(char *str){
	int i = 0;

 		if(str[i] == '\0')
		{
			return (1);
		}

	while (str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
    	{

		}
		
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}