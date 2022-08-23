CC			=	cc
CFLAGS		=
NAME		=	push_swap
INCLUDE	=	include

LIBFT_PATH	=	./libft/
SRCS_PATH	=	./srcs/
LST_PATH	=	./lst/

SRCS_FILES	=	check_args.c error.c get_index.c main.c put_list.c\
				radix_sort.c under_five_pattern.c
LST_FILES	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstnew.c \
				ft_lstlast.c ft_lstsize.c

SRCS		=	$(addprefix $(SRCS_PATH), $(SRCS_FILES))
LST			=	$(addprefix $(LST_PATH), $(LST_FILES))
SRCS_OBJS	=	$(SRCS:.c=.o)
LST_OBJS	=	$(LST:.c=.o)

LIBFTMAKE	=	$(MAKE) -C $(LIBFT_PATH)
LIBFTFLAG	=	-L$(LIBFT_PATH) -lft

all:			$(NAME)

$(NAME):		$(SRCS_OBJS) $(LST_OBJS)
				$(LIBFTMAKE)
				$(CC) $(CFLAGS) $(SRCS_OBJS) $(LST_OBJS) $(LIBFTFLAG) -o $(NAME)

clean:
				$(LIBFTMAKE) clean
				$(RM) $(SRCS_OBJS) $(LST_OBJS)

fclean:			clean
				$(LIBFTMAKE) fclean
				$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
