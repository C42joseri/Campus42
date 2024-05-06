NAME = libft.a

SOURCES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		  ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c\
		  ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c\
		  ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c\
		  ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c\
		  ft_strtrim.c ft_striteri.c ft_strmapi.c ft_split.c ft_itoa.c\
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
		  ft_putnbr_fd.c\

SOURCES_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

OBJECTS = $(SOURCES:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS) $(OBJECTS_BONUS)
	ar rcs $@ $(OBJECTS) $(OBJECTS_BONUS)

%.o: %.c
	$(CC) -c $(CFLAGS) $?

bonus: $(OBJECTS_BONUS)
	ar rcs $@ $(OBJECTS_BONUS)

clean:
	rm -f $(OBJECTS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus