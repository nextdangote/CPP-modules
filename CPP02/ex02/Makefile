CC = g++

FLAGS = -Wall -Wextra -Werror -std=c++98 -g

SRCS = $(wildcard *.cpp)

OBJS = $(SRCS:.cpp=.o)

DEPS = $(SRCS:.cpp=.d)

TARGET = Onestfixeee

$(TARGET) : $(OBJS)
	$(CC) $(FLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CC) $(FLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	rm -f $(OBJS) $(DEPS)

fclean: clean
	rm -f $(TARGET)

re : clean $(TARGET)

.PHONY: re clean
