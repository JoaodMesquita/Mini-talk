NAME = libft.a

SRC = $(addsuffix .c, ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memcmp ft_memchr ft_strnstr ft_atoi ft_calloc ft_strdup ft_substr ft_strjoin ft_strtrim ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_itoa ft_strmapi ft_striteri ft_split ft_pointer ft_printf ft_putchar ft_puthexa ft_puthexa_big ft_putnbr ft_putstr ft_unsigned_putnbr)

OBJS := $(SRC:%.c=%.o)

CC = cc -Wall -Werror -Wextra -g

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
