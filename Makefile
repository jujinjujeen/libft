# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydidenko <ydidenko@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/17 20:08:38 by ydidenko      #+#    #+#                  #
#    Updated: 2023/11/10 22:27:39 by ydidenko      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME 			=	libft.a

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c ft_strchr.c  ft_strlcpy.c ft_substr.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
					ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_split.c

BONS			=	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstlast_bonus.c \
					ft_lstsize_bonus.c

OBJS 			=	$(SRCS:.c=.o)

B_OBJS 			=	$(BONS:.c=.o)

CC				=	cc
RM				=	rm -f
CFLAGS			=	-Wall -Wextra -Werror -I.

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

%.o:			%.c
				$(CC) $(CFLAGS) -c $< -o $@

bonus: 			$(B_OBJS) $(OBJS)
				ar rcs $(NAME) $(OBJS) $(B_OBJS)

clean:
				$(RM) $(OBJS) $(B_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test:			$(NAME) test.c
				$(CC) $(CFLAGS) -o test test.c -L. -lft -g

.PHONY:			clean fclean re all
