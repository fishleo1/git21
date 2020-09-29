#ifndef HEADER_H
# define HEADER_H
# define SIZE 8192
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		map_check(char *str);
int		map_lines(char *str);
char	*ft_chars(char *str);

#endif
