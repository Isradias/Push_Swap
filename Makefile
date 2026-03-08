# Nome do executável
NAME = push_swap

# Compilador e flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Lista de arquivos fonte
SRCS = $(wildcard *.c)

# Gera automaticamente a lista de objetos a partir dos fontes
OBJS = $(SRCS:.c=.o)

# Alvo padrão
all: $(NAME)

# Regra para criar o executável
$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@chmod 755 $(NAME)
	@echo "Wildcard está sendo utilizado, verificar norma."

# Como compilar arquivos .c em .o
%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

# Limpar arquivos objeto
clean:
	@rm -f $(OBJS)

# Limpar arquivos objeto + executável
fclean: clean
	@rm -f $(NAME)

# Recompilar tudo
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

.PHONY: all clean fclean re push pull
