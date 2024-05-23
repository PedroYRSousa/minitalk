CC=gcc

CFLAGS= -g -Wall -Wextra -Werror

NAME_S=server
NAME_C=client

SRC_S = $(shell find -name '*.c' | grep -v "client")
OBJ_S = $(SRC_S:%.c=%.o)

SRC_C = $(shell find -name '*.c' | grep -v "server")
OBJ_C = $(SRC_C:%.c=%.o)

LFLAGS = -g -Wall -Wextra -Werror

all: $(NAME_S) $(NAME_C)

$(NAME_S): ${OBJ_S}
	$(CC) -o $(NAME_S) ${OBJ_S} $(LFLAGS)

$(NAME_C): ${OBJ_C}
	$(CC) -o $(NAME_C) ${OBJ_C} $(LFLAGS)

clean:
	rm -f $(OBJ_S);
	rm -f $(OBJ_C);

fclean: clean
	rm -f $(NAME_S);
	rm -f $(NAME_C);

re: fclean all

bonus: 