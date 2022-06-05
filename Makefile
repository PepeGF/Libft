### --- COLORS --- ###

RED		= '\033[31m'
GREEN	= '\033[1;32m'
YELLOW	= '\033[33m'
BLUE	= '\033[34m'
PURPLE	= '\033[1;35m'
CIAN	= '\033[36m'
WHITE	= '\033[37m'
NONE	= '\033[0m'

NAME = libft.a

SRCS_PATH = ./
INCS_PATH = inc/
BIN_PATH = bin/

SRCS    =     ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
              ft_strlen.c ft_memset.c ft_bzero.c ft_memchr.c ft_strchr.c \
              ft_strlcpy.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c \
              ft_toupper.c ft_atoi.c ft_memcpy.c ft_memmove.c ft_strlcat.c\
              ft_memcmp.c ft_calloc.c ft_strdup.c\
              ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
              ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
              ft_putendl_fd.c ft_putnbr_fd.c \
              ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
              ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
              ft_lstclear.c ft_lstiter.c ft_lstmap.c \

OBJS = $(SRCS:%.c=bin/%.o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra  

RM = rm -f

all: $(NAME)	

$(BIN_PATH)%.o: $(SRCS_PATH)%.c
	@mkdir -p $(BIN_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@
	
$(NAME): $(OBJS)
	@ar rc $(NAME) $?
	@ranlib $(NAME)
	@echo $(GREEN)$(NAME) ": successfully compiled"$(NONE)

clean:	
	@$(RM) $(OBJS)
	@rm -rf $(BIN_PATH)
	@echo $(RED)"[Object Files Deleted]"$(NONE)

fclean: clean
	@$(RM) $(NAME)
	@echo $(RED)"[Executable File Deleted]"$(NONE)

re:	fclean
	@sleep 2
	@clear
	@echo $(PURPLE)"Compiling $(NAME)"$(NONE)
	@$(MAKE)
	
.PHONY: all clean fclean re
