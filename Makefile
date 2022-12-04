CC  = cc

CFLAGS    = -Wall -Wextra -Werror

NAME  = libftprintf.a

SRCS			=	ft_putchar.c\
					ft_putstr.c\
					ft_putnbr.c\
					ft_puthex.c\
					ft_putadrs.c\
					ft_printf.c\



OBJS    = 	$(SRCS:.c=.o)

RM      = 	rm -rf

CFLAGS	= -Wall -Wextra -Werror
 
all:		$(NAME)

$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

clean:	
	$(RM) $(OBJS)

fclean:	clean
	 $(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re