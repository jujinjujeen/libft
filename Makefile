# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ydidenko <ydidenko@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/17 20:08:38 by ydidenko      #+#    #+#                  #
#    Updated: 2023/10/18 14:50:14 by ydidenko      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

SRC = src

OBJDIR = obj

NAME = libft.a

SRCS			=	$(addprefix $(SRC)/, ft_isalnum.c ft_isprint.c ft_memcmp.c \
					ft_strlcat.c ft_strncmp.c ft_atoi.c ft_isalpha.c \
					ft_memcpy.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c)

OBJS = $(addprefix $(OBJDIR)/, $(notdir $(SRCS:.c=.o)))

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJDIR)/%.o:	$(SRC)/%.c | $(OBJDIR)
				$(CC) $(CFLAGS) -c $< -o $@

$(OBJDIR):
				mkdir -p $(OBJDIR)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)
