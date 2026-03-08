NAME = push_swap

SRC =  

OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJ)
	ar rcs $@ $^

all: $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

push:
	@git add .
	@git commit -m "save"
	@git push

pull:
	@git fetch origin
	@git reset --hard origin/main
	@git clean -fd

main:
	@cc -g main_push_swap.c $(NAME)

.PHONY: all clean fclean re
