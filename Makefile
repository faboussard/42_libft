define BOGUS

NAME=libft.a

SRC=strtrim substr strchr strlen

SRCS=$(SRC:%=ft_%.c)

BONUS_SRCS=ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c\
                   ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS=$(SRCS:.c=.o)

BONUS_OBJS=$(BONUS_SRCS:.c=.o)

INCLUDES=./

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJECTS) libft.h
        @ar -rc $(NAME) $(OBJECTS)

%.o: %.c
        cc -Wall -Wextra -Werror -I$(INCLUDES) -L. -lft -c $<

clean:
        @rm -f $(OBJECTS)

fclean: clean
        @rm -f $(NAME)

#bonus: $(BONUSES_SRCS) libft.h
#               @cc -Wall -Wextra -Werror -I$(INCLUDES) -c $(BONUSES_SRCS)
#               @ar -rc $(NAME) $(OBJECTS) $(BONUS_OBJS)

re: fclean all

endef