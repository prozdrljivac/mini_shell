# Compiler and Flags
CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11
SRCS = src/main.c
OBJS = $(SRCS:.c=.o)
TARGET = mini_shell

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run