# Name of the program.
NAME     := megaphone

# Sources and objects.
SRCS     := megaphone.cpp
OBJS     := $(SRCS:.cpp=.o)

CC     := clang++
FLAGS := -Wall -Werror -Wextra

all: $(NAME)

# Compile the program with the objects.
$(NAME): $(OBJS)
	@$(CC) $(OBJS) -o $@

# This won't run if the source files don't exist or are not modified.
%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

# Rules for removing/cleaning files.
clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re:     fclean all

.PHONY: all clean fclean format re