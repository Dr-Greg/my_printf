CC		=		gcc
SRC		=		src/my_printf.c			\
				src/switch_opt.c		\
				src/options_1.c			\
				src/options_2.c			\
				src/libmy/my_putstr.c		\
				src/libmy/my_aff_tab_num.c	\
				src/libmy/my_put_nbr.c		\
				src/libmy/my_putnbr_base.c	\
				src/libmy/my_strlen.c
OBJ		=		$(SRC:%.c=%.o)
RM		=		rm -rf
A		=		libmy_printf_`uname -m`-`uname -s`.a
SO		=		libmy_printf_`uname -m`-`uname -s`.so
CFLAGS		=		-W -Wall -Werror -Wextra -Wpedantic -fPIC

all:				my_printf_static my_printf_dynamic

my_printf_static:		$(OBJ)
				ar r $(A) $(OBJ)

my_printf_dynamic:		$(OBJ)
				$(CC) $(CFLAGS) -fPIC -shared -o $(SO) $(SRC)

clean:
				$(RM) $(OBJ)

fclean:				clean
				$(RM) $(A) $(SO)

re:				fclean all

.PHONY:				all clean fclean re
