SRC = srcs/ft_putchar.c \
      srcs/ft_swap.c \
      srcs/ft_putstr.c \
      srcs/ft_strlen.c \
      srcs/ft_strcmp.c

OBJS = $(SRC:.c=.o)

SRC_DIR = srcs/

HEADER_DIR = includes/

CFLAGS += -Wall -Wextra -Werror

CC = gcc

NAME = libft.a

all: $(NAME)

$(NAME): lib $(OBJS)

$(OBJS): %.o: %.c 
	$(CC) $(CFLAGS) -I $(HEADER_DIR) -c $< -o $@

lib: $(OBJS)
	ar rcs $(NAME) $(OJBS)
	 
clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re: fclean all
