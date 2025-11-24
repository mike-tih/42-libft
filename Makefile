NAME = libft.a
CC = cc
CFLAGS = -Wall -Werror -Wextra -I includes
AR = ar rcs

SRC_DIR = src
INC_DIR = includes
OBJ_DIR = obj
OBJ_PRINTF_DIR = ft_printf_handlers

SRCS =	ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_isspace.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_base_fd.c \
	ft_putsizet_base_fd.c \
	ft_putuint_base_fd.c \
	ft_printf.c \
	$(OBJ_PRINTF_DIR)/ft_handle_c.c \
	$(OBJ_PRINTF_DIR)/ft_handle_i.c \
	$(OBJ_PRINTF_DIR)/ft_handle_p.c \
	$(OBJ_PRINTF_DIR)/ft_handle_s.c \
	$(OBJ_PRINTF_DIR)/ft_handle_u.c \
	$(OBJ_PRINTF_DIR)/ft_handle_x.c
OBJS = $(addprefix $(OBJ_DIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/%.h
	@mkdir -p $(OBJ_DIR) $(OBJ_DIR)/$(OBJ_PRINTF_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re