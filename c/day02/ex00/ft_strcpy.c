#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char * dst, const char* src)
{
	int i;
	i = 0;
	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

int main(void)
{
	char dst[20];
	char src[20];

	ft_strcpy(dst, "Hello\0");
	printf("%s", dst);
	return (0);
}
