NAME     := iter

SRCS     := iter.cpp

OBJS     := $(SRCS:.cpp=.o)

CC     := clang++
FLAGS := -std=c++98 -Wall -Werror -Wextra
HDD := 

all: $(NAME)

$(NAME): $(OBJS) $(HDD)
	@$(CC) $(OBJS) -o $@

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:     fclean all

.PHONY: all clean fclean format re