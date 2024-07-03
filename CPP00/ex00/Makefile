NAME = megaphone

FLAGS = -std=c++98 -Wall -Wextra -Werror

CC = c++

SRCDIR = src

SRC := $(wildcard $(SRCDIR)/*.cpp)

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(FLAGS) -o $@ $(SRC)

clean:
	rm -f $(NAME) $(SRCDIR)/*.o || true
	