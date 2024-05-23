CC = clang
CFLAGS = -Wall -Werror -Wextra
NAME = lemipc
INCLUDES = ./inc
SRCS = src/lemipc.c
OBJS = ${SRCS:.c=.o}
DSRCS = ./libft/*.c
DOBJS = ./libft/objs/*.o

all : ${NAME}
$(NAME) : $(OBJS)
	make -C libft
	$(CC) $(OBJS) $(DOBJS) -I$(INCLUDES) -o $(NAME)
clean :
	make clean -C libft 
	rm -f $(OBJS)
fclean : clean
	rm -f libft/libft.a
	rm -f $(NAME)
re : fclean all
