CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

HEADER = libft.h

SRC =	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c	\
		ft_strlen.c ft_strchr.c ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c	\
		ft_bzero.c ft_memset.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c	\
		ft_atoi.c ft_calloc.c ft_strdup.c	\
		ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_strmapi.c ft_striteri.c ft_itoa.c	\

BSRC = ft_lstmap.c ft_lstiter.c ft_lstclear.c ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c \
		ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c 

#BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	@echo "Libft Done !"

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) $<

clean:
	rm -rf $(OBJ) 
	$(BOBJ)

fclean: clean
	rm -rf $(NAME) 
	$(BOBJ)

re: fclean all

bonus: all $(BOBJ)
	ar -rc $(NAME) $(BOBJ)




# This won't run if the .o files don't exist or are not modified
# $(NAME): $(OBJ)
# ar rcs $(NAME) $(OBJ)

# This won't run if the source files don't exist or are not modified
# $(OBJ): $(FILES)
# gcc $(CFLAGS) $(FILES)

# clean:
# rm -f $(OBJ)
# rm -f $(FILES) # comment this line if you don't want it to remove the source files from the root

# fclean: clean
# rm -f $(NAME)

# re: fclean all

# I use .PHONY to make sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
# .PHONY: clean fclean all re