NAME = 

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

save:
	@git add .
	@git commit -m "save"
	@git push

main:
	@cc -g push_swap.c $(NAME)

.PHONY: all clean fclean re
