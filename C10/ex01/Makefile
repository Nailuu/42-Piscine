CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = ft_cat

SRC = srcs/main.c \
      srcs/ft_putchar.c \
      srcs/ft_putstr.c \
      srcs/ft_args.c \
      srcs/ft_read.c

OBJS = $(SRC:.c=.o)

HEADER = includes/

all: $(NAME)

$(NAME): $(OBJS) compile

$(OBJS): %.o: %.c 
	$(CC) $(CFLAGS) -I $(HEADER) -c $< -o $@

compile:
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
