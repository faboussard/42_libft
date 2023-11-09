define BOGUS

NAME=libft.a

SRC= ft_strlen \
     			 ft_memmove \
     			 ft_memcpy \
     			 ft_strlcpy \
     			 ft_strlcat \
     			 ft_isalpha \
     			 ft_isdigit \
     			 ft_isalnum \
     			 ft_isascii \
     			 ft_isprint \
     			 ft_memset \
     			 ft_bzero \
     			 ft_toupper \
     			 ft_tolower \
     			 ft_strchr \
     			 ft_strrchr \
     			 ft_strncmp \
     			 ft_memchr \
     			 ft_memcmp \
     			 ft_strnstr \
     			 ft_atoi \
     			 ft_calloc \
     			 ft_strdup \
     			 ft_substr \
     			 ft_strjoin \
     			 ft_strtrim \
     			 ft_split \
     			 ft_itoa \
     			 ft_strmapi \
     			 ft_striteri \
     			 ft_putchar_fd \
     			 ft_putstr_fd \
     			 ft_putendl_fd \
     			 ft_putnbr_fd \

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