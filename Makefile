SRCS	=	ft_printf.c\
			print_letters.c\
			print_pointer.c\
			print_decimal.c\
			print_hex.c\

NAME	= libftprintf.a

HEADER	=	ft_printf.h

SRCS_OBJS	= $(SRCS:.c=.o)

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

AR	= 	ar rcs

RM	=	rm -f

all: $(NAME)

$(NAME): $(SRCS_OBJS)
	$(AR) $(NAME) $(SRCS_OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $<

clean:
	$(RM) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re: 	fclean all

.PHONY: all clean fclean re bonus