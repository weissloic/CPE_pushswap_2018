CC	=	gcc
CFLAGS = -I/include/ -L./lib/my -lmy -g

SRC_TEST = 	src/linked_list.c \
	src/s_function.c \
	src/my_sorter.c \

			
			

OBJ_TEST = $(SRC_TEST:.c=.o)
	
NAME_TEST = unit

NAME	=	bsq

MAIN	= 	main.c

REMOVE	=	remove_space.c

OPERATION	=	operation.c

all:	$(NAME)

$(NAME):
	@make -sC lib/my
	$(CC) $(SRC_TEST) -o push_swap $(CFLAGS)
	


clean:
	rm -f *~ *#

fclean: clean
	rm -f $(NAME)

re: fclean all clean