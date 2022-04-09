NAME	=	fixed

SRCS	=	Fixed.cpp main.cpp

OBJS	=	${SRCS:.c=.o}

DEP 	=	$(OBJS:.o=.d)

FLAGS	=	-Wall -Wextra -Werror -MMD -I.

all:	$(NAME)

$(NAME):	$(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

re:	clean all

.PHONY:	all clean fclean re