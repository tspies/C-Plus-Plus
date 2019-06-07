NAME     := frag_trap

SRCS     := main.cpp \
				FragTrap.cpp

OBJS     := $(SRCS:.cpp=.o)

CC     := clang++
FLAGS := -Wall -Werror -Wextra
HDD := FragTrap.hpp\

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