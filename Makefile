# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydidenko <ydidenko@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/17 20:08:38 by ydidenko      #+#    #+#                  #
#    Updated: 2023/11/06 14:39:37 by ydidenko      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

OBJDIR = obj

NAME = libft.a

SRCS			=	ft_isalnum.c ft_isprint.c ft_memcmp.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c ft_strchr.c  ft_strlcpy.c ft_substr.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c \
					ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c \
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					ft_split.c

OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o:	%.c | $(OBJDIR)
				$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
				mkdir -p $(OBJDIR)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)

test: $(NAME) test.c
	$(CC) $(CFLAGS) -o test test.c -L. -lft -g
