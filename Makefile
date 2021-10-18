CC := gcc
CFLAGS := -Wall -Wextra -Werror -O2 -MMD
ARFLAGS := rsv
NAME := libft.a

SRC := ft_atoi.c ft_isdigit.c ft_memchr.c ft_putendl_fd.c ft_striteri.c \
	ft_strncmp.c ft_toupper.c ft_bzero.c ft_isprint.c ft_memcmp.c ft_putnbr_fd.c \
	ft_strjoin.c ft_strnstr.c ft_calloc.c ft_itoa.c ft_memcpy.c ft_putstr_fd.c \
	ft_strlcat.c ft_strrchr.c ft_isalnum.c ft_memmove.c ft_split.c ft_strlcpy.c \
	ft_strtrim.c ft_isalpha.c ft_memset.c ft_strchr.c ft_strlen.c ft_substr.c \
	ft_isascii.c ft_putchar_fd.c ft_strdup.c ft_strmapi.c ft_tolower.c
SRC_BONUS := ft_lstiter_bonus.c ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstmap_bonus.c \
	ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstclear_bonus.c ft_lstsize_bonus.c 
OBJ := $(SRC:.c=.o)
OBJ_BONUS := $(SRC_BONUS:.c=.o)
DEPS := $(SRC:.c=.d)
DEPS_BONUS := $(SRC_BONUS:.c=.d)


.PRECIOUS: $(OBJ) $(OBJ_BONUS)
.PHONY: all bonus clean fclean re

$(NAME): $(NAME)($(OBJ))

bonus: $(NAME)($(OBJ_BONUS))

all: $(NAME) bonus

-include $(DEPS) $(DEPS_BONUS)

clean:
	$(RM) $(OBJ) $(OBJ_BONUS) $(DEPS) $(DEPS_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)
