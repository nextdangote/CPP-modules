CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

OBJS = $(SRCS:.cpp=.o)

DEPS = $(SRCS:.cpp=.d)

TARGET = Laviolenceeee

$(TARGET) : $(OBJS)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJS)

%.o : %.cpp
	$(CC) $(FLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(TARGET) $(OBJS) $(DEPS)