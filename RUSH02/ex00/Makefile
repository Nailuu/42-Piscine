CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = rush-02

SRC = srcs/main.c \
      srcs/lib/ft_strdup.c \
      srcs/lib/ft_strlen.c \
      srcs/lib/ft_strstr.c \
      srcs/lib/ft_putstr.c \
      srcs/lib/ft_strcmp.c \
      srcs/parse.c \
      srcs/print.c \
      srcs/struct.c \
      srcs/search.c \
      srcs/validate.c \
      srcs/convert.c

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
