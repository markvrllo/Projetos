# Makefile para conversão decimal para binário
CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -O2
LDFLAGS :=
LDLIBS :=
TARGET := main
OBJS := main.o Stack.o

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) $(OBJS) -o $@ $(LDLIBS)

# Regras de compilação
main.o: main.c Stack.h
	$(CC) $(CFLAGS) -c main.c

Stack.o: Stack.c Stack.h
	$(CC) $(CFLAGS) -c Stack.c

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
