#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char * dst, const char * src)
{
	int i;
	i = 0;

	while (src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	return dst;
}

int main(void)
{
	char dst[20];
	char src[20];

	strcpy(dst, "Hello\0");
	printf("%s", dst);
	return 0;
}
