CC = g++
TARGET = Main.out
SRCS = Main.cpp Map.cpp Node.cpp
OBJS = $(SRCS:.cpp=.o)
CFLAGS = -std=c++20 -Wall -Wextra -Wshadow -ftrapv

$(TARGET): $(OBJS)
	$(CC) $^ -o $@

SUFFIXES:
SUFFIXES: .cpp .o

.cpp.o:
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
