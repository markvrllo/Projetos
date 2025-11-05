# Criar o Makefile conforme especificado no documento
makefile_decimal_binario = """# Makefile para conversão decimal para binário
CC := gcc
CFLAGS := -std=c11 -Wall -Wextra -Wpedantic -O2
LDFLAGS :=
LDLIBS :=
TARGET := main
OBJS := main.o Stack.o

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
\t$(CC) $(LDFLAGS) $(OBJS) -o $@ $(LDLIBS)

# Regras de compilação
main.o: main.c Stack.h
\t$(CC) $(CFLAGS) -c main.c

Stack.o: Stack.c Stack.h
\t$(CC) $(CFLAGS) -c Stack.c

run: $(TARGET)
\t./$(TARGET)

clean:
\trm -f $(OBJS) $(TARGET)
"""

# Criar o Makefile
with open("Makefile", "w") as f:
    f.write(makefile_decimal_binario)

print("Makefile para conversão decimal-binário criado com sucesso!")