NAME     := memoryleak

SRCS     := ex04.cpp

OBJS     := $(SRCS:.cpp=.o)

CC     := clang++
FLAGS := -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re