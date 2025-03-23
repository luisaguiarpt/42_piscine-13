CC = gcc
CFLAGS = -Wall -Wextra -Werror -g

INCS = includes/operators.h includes/aux.h includes/error_msg.h
SRCS = srcs/ft_putnbr.c srcs/ft_atoi.c srcs/do-op.c srcs/operators.c
OBJS = $(SRCS:srcs/%.c=srcs/%.o)



NAME = do-op

all:	$(NAME)

srcs/%.o: srcs/%.c $(INCS)
	$(CC) $(CFLAGS) -Iincludes -c $< -o $@ 

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
