NAME := libft.a
CC := cc
CC_FLAGS := -Wall -Werror -Wextra


AR := ar
AR_FLAGS := -csr


FT_FILES := ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_memchr.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_memcpy.c \
ft_memcmp.c \
ft_memmove.c \
ft_memset.c \
ft_strchr.c \
ft_strdup.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c \
ft_itoa.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_striteri.c \
ft_strmapi.c \

FT_FILES_BONUS := ft_lstnew_bonus.c \
ft_lstadd_front_bonus.c \
ft_lstsize_bonus.c \
ft_lstlast_bonus.c \
ft_lstadd_back_bonus.c \
ft_lstclear_bonus.c \
ft_lstdelone_bonus.c \
ft_lstiter_bonus.c \
ft_lstmap_bonus.c \


FT_FTEST := main.c


INCLUDES := libft.h


OBJ := $(FT_FILES:%.c=%.o)
OBJ_BONUS := $(FT_FILES_BONUS:%.c=%.o)

all: $(NAME)
$(NAME) : $(OBJ)
	$(AR) $(AR_FLAGS) $(NAME) $?

%.o: %.c
	$(CC) $(CC_FLAGS) -c -o $@ $<

clean :
	rm -f $(OBJ) $(OBJ_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

bonus: $(NAME)
$(NAME) : $(OBJ) $(OBJ_BONUS)
	$(AR) $(AR_FLAGS) $(NAME) $?

test:  all
	$(CC) $(CC_FLAGS) -I $(INCLUDES) -o $@ main.c $(NAME)
	$(clean)

testc: all test clean

.PHONY: all clean fclean re test bonus