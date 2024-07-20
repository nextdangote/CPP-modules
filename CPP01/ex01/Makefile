CC = g++

FLAGS = -std=c++98 -Wall -Wextra -Werror -g

SRCS = main.cpp newZombie.cpp Zombie.cpp randomChump.cpp zombieHorde.cpp

TARGET = Zombieland

OBJS = $(SRCS:.cpp=.o)

DEPS = $(SRCS:.cpp=.d)

$(TARGET): $(OBJS)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(FLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean :
	rm -f $(OBJS) $(TARGET) $(DEPS)