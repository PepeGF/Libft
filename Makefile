#archivos que se van a compilar
SRCS	=	ft_isascii.c ft_memmove.c ft_bzero.c ft_isdigit.c \
			ft_memset.c ft_isalnum.c ft_isprint.c ft_strlcpy.c \
			ft_isalpha.c ft_memcpy.c ft_strlen.c

OBJS 	= $(SRCS:.c=.o)
#con qué compilador se complia, nosotros usamos gcc
CC		= gcc
#flags para compilar
CFLAGS	= -Wall -Wextra -Werror

#nada llama a CC y CFLAGS xq están incuidos en reglas implícitas al compilar
#codigo fuente de C

#comando para borrar
RM		= rm -f

NAME	= libft.a

all:	$(NAME)

$(NAME):	$(OBJS)
				ar rcs $(NAME) $(OBJS)
#ar: crea cada miembro $(OBJS) detro de $(NAME) que es la librería estática 
#c: flag de ar para crear el archivo si no existe
#r: Insert the files member... into archive (with replacement) 
#s: Add an index to the archive, or update it if it already exists

clean:	
		$(RM) $(OBJS)
#borra los archivos .o

fclean:	clean
		$(RM) $(NAME)
#borra los archivos .o y el archivo generado al compilar todo (en este caso
#la libreria libft.a, pero normalmente sería el programa.out

re:	fclean $(NAME)
#borra todo (fclean) y vuelve a compilar todo lo que necesite ser compilado

.PHONY:	all clean fclean re
#.PHONY es para que make no confunda las reglas con potenciales archivos
#que pueden tener el mismo nombre que alguna de las reglas .PHONY
