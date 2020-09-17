#include <stdio.h>
#include <string.h>
#include <unistd.h>

int		ft_str_is_alpha(char *str){
	int i = 0;

 		if(str[i] == '\0')
		{
			return (1);
		}

	while (str[i])
	{
		if(str[i] >= '0' && str[i] <= '9')
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

int main(void)
{
	char name[] = "asd";
	int print;
	print = ft_str_is_alpha(name);
	printf("%d\n", print);
	return(0);
}