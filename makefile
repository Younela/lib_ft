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


BSRC = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \

OBJ = $(SRC:.c=.o)

BOBJ = $(BSRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)
	@echo "Libft Done !"

%.o: %.c $(HEADER)
	$(CC) -c $(CFLAGS) $<

clean:
	rm -rf $(OBJ) $(BOBJ)

fclean: clean
	rm -rf $(NAME) $(BOBJ)

re: fclean all

bonus: all $(BOBJ)
	ar -rc $(NAME) $(BOBJ)

# # Name of the executable
# NAME = LIBFT

# # Compiler and flags
# CC = gcc
# CFLAGS = -Wall -Wextra -Werror

# LIBRARY = libtest.a
# # Directories and files
# SRCS = ft_strtrim.c ft_strjoin.c ft_itoa.c ft_substr.c \
#        ft_striteri.c ft_split.c ft_strmapi.c ft_calloc.c ft_memchr.c \
#        ft_bzero.c ft_strdup.c ft_isalnum.c ft_isascii.c \
#        ft_isprint.c ft_memcpy.c ft_memset.c ft_strlcat.c \
#        ft_strlen.c ft_strncmp.c ft_strrchr.c ft_toupper.c \
#        ft_atoi.c ft_isalpha.c ft_isdigit.c ft_memcmp.c \
#        ft_memmove.c ft_strchr.c ft_strlcpy.c ft_strnstr.c ft_tolower.c

# OBJS = $(SRCS:.c=.o)

# LIBFT_DIR = libft
# LIBFT = $(LIBFT_DIR)/libft.a

# all : $(NAME)

# # Rule to create the executable
# $(NAME) : $(OBJS)
# 	$(MAKE) -C $(LIBFT_DIR)
# 	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# # Rule to clean object files
# clean:
# 	$(MAKE) clean -C $(LIBFT_DIR) # Clean libft object files
# 	rm -f $(OBJS)

# # Rule to clean all compiled files and the executable
# fclean: clean
# 	$(MAKE) fclean -C $(LIBFT_DIR)
# 	rm -f $(NAME)

# re: fclean all

# # Compile all .o files from .c files
# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# .PHONY: all clean fclean re


# # Name of the executable
# NAME = LIBFT

# # Compiler and flags
# CC = gcc
# CFLAGS = -Wall -Wextra -Werror

# LIBRARY = libtest.a
# # Directories and files
# SRCS = SRCS =ft_strtrim.c ft_strjoin.c ft_itoa.c ft_substr.c \
# 	ft_striteri.c ft_split.c ft_strmapi.c  ft_calloc.c ft_memchr.c \
# 	ft_bzero.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c \
# 	ft_strdup.c ft_substr.c ft_isalnum.c  ft_isascii.c \
# 	ft_isprint.c  ft_memcpy.c   ft_memset.c  ft_strlcat.c \
# 	ft_strlen.c  ft_strncmp.c  ft_strrchr.c  ft_toupper.c \
# 	ft_atoi.c  ft_isalpha.c  ft_isdigit.c  ft_memcmp.c  \
# 	ft_memmove.c  ft_strchr.c  ft_strlcpy.c  ft_isalpha.c \
# 	ft_strnstr.c  ft_tolower.c

# OBJS = $(SRCS: .c=.o)

# LIBFT_DIR = ./libft
# LIBFT = $(LIBFT_DIR)/libft.a

# all : $(NAME)

# # Rule to create the executable
# $(NAME) : $(OBJS)
# 	$(MAKE) -C $(LIBFT_DIR)
# 	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

# # Rule to clean object files

# clean:
# 	$(MAKE) clean -C $(LIBFT_DIR) # Clean libft object files
# 	rm -f $(OBJS)

# # Rule to clean all compiled files and the executable

# fclean: clean
# 	$(MAKE) fclean -C $(LIBFT_DIR)
# 	rm -f $(NAME)

# re : fclear all

# # Compile all .o files from .c files
# %.o: %.c
# 	$(CC) $(CFLAGS) -c $< -o $@

# .PHONY: all clean fclean re bonus