NAME	=	fixed

SRCS	=	Fixed.cpp main.cpp

OBJS	=	${SRCS:.cpp=.o}

DEP 	=	$(OBJS:.o=.d)

FLAGS	=	-Wall -Wextra -Werror -MMD -I.

all:	$(NAME)

$(NAME):	$(OBJS)
	c++ $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS) $(DEP)

fclean:	clean
	rm -f $(NAME)

re:	clean all

.PHONY:	all clean fclean re

include $(wildcard $(DEP))
