NAME=libftprintf
CC=cc
CFLAGS= -Wall -Werror -Wextra
OBJECTS=*.c

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rsc $?

%.o: %.c
	$(CC) $(CFLAGS) -c $?

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
