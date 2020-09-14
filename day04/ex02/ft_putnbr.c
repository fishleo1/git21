#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
	char i[32000]= nb;
	printf("%c\n", i);
}

int main(void)
{
	int nb;
	nb = 42;
	ft_putnbr(nb);
	return (0);
}