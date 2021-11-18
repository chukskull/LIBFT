CC=gcc
FLAGS=-Wall -Wextra -Werror
AR= ar crs
RM =rm  -rf
FILES= ft_atoi	ft_strjoin ft_substr ft_strtrim	ft_split ft_putnbr_fd	ft_strmapi ft_itoa	ft_striteri ft_putchar_fd ft_putstr_fd ft_putendl_fd \
		ft_bzero	ft_strchr	ft_strncmp	ft_memcmp	ft_memchr	ft_strnstr	ft_strdup ft_calloc	\
			ft_strrchr	ft_tolower	ft_isalnum  ft_isalpha  ft_isascii  ft_isdigit  ft_isprint  ft_memcpy   ft_memmove ft_memset   ft_strlcat  ft_strlcpy  ft_strlen ft_toupper
BONUS = ft_lstmap ft_lstnew ft_lstadd_back ft_lstadd_front	ft_lstclear ft_lstdelone ft_lstiter ft_lstlast  ft_lstsize
SRC = $(FILES:=.c)
OBJ= $(FILES:=.o)
NAME =libft.a 
SRC2 = $(BONUS:=.c)
OBJ2 = $(BONUS:=.o)
	
.PHONY:all clean fclean re bonus

all:$(NAME)

$(NAME):$(OBJ)
	$(AR) $(NAME) $(OBJ)
%.o : %.c 
	$(CC) $(FLAGS) -c $< -o $@
bonus: $(OBJ2)
	$(AR) $(NAME) $(OBJ2)

clean:
	$(RM) $(OBJ)
	$(RM) $(OBJ2)
fclean : clean
	$(RM) $(NAME)

re : fclean all
