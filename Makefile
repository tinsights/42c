NAME = libft.a

SOURCES = ft_isdigit.c ft_isalpha.c ft_isalnum.c

OBJECTS = $(SOURCES:.c=.o)

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	ar -crs $(NAME) $(OBJECTS)

%.o: %.c
	cc $(CFLAGS) $< -c

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re