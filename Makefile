MAKEFLAGS += silent

NAME=libft.a

SRCS=ft_bzero.c    ft_isalpha.c  ft_isdigit.c  ft_memset.c ft_isalnum.c  ft_isascii.c  ft_isprint.c  ft_strlen.c ft_memcpy.c
OBJS = $(SRCS:.c=.o)

CC= cc
FLAGS= -Wall -Werror -Wextra

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean $(NAME)

run: re
	clear
	$(CC) $(FLAGS) main.c $(NAME)
	./a.out

test: re
	clear
	bash run_docker.sh
