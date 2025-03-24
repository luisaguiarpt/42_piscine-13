CC = gcc
FLAGS = -Wall -Wextra -Werror -g

INCDIR = includes
SRCDIR = srcs

INCS = $(INCDIR)/ft_string.h $(INCDIR)/error_msg.h
SRCS = $(SRCDIR)/ft_string.c $(SRCDIR)/ft_display_file.c
OBJS = $(SRCS:$(SRCDIR)/%.c=$(SRCDIR)/%.o)

NAME = ft_diplay_file

all:	$(NAME)

$(SRCDIR)/%.o:	$(SRCDIR)/%.c $(INCS)
	$(CC) $(FLAGS) -c $< -o $@ -I $(INCDIR)

$(NAME):	$(OBJS)
	 $(CC) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
