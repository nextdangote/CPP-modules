CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = main.cpp

OBJS = $(SRCS:.cpp=.o)

DEPS = $(SRCS:.cpp=.d)

TARGET = Brain

$(TARGET) : $(OBJS)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(FLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJS) $(TARGET) $(DEPS)