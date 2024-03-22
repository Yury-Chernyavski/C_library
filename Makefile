NAME = libft.a

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c

MY_OBJECT = ${SRC:.c=.o}

LIBC = ar rcs

CLANG = clang

CFLAGS = -Wextra -Wall -Werror

.c.o:
	${CLANG} ${CFLAGS} -c $< -o ${<:.c=.o}

RM = rm -f

${NAME}: ${MY_OBJECT}
	${LIBC} ${NAME} ${MY_OBJECT}

all: ${NAME}

clean:
	${RM} ${MY_OBJECT}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re