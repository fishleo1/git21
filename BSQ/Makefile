NAME	= BSQ
SRCS	= ./srcs/main.c ./srcs/map_error.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes

.c.o :
	gcc -Wall -Wextra -Werror -c $< -o ${<:.c=.o} -I$(INCS)

$(NAME) : $(OBJS)
	gcc $(OBJS) -o $(NAME)

all : $(NAME)

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all
