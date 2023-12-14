CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = bsq

SRC = srcs/main.c \
      srcs/lib/ft_atoi.c \
      srcs/lib/ft_is_printable.c \
      srcs/matrix.c \
      srcs/wmatrix.c \
      srcs/convert.c \
      srcs/print.c \
      srcs/read.c \
      srcs/solution.c \
      srcs/validate.c

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
