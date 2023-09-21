# Содержимое файла makefile

CC = gcc
CFLAGS = -Wall -Wextra

# Правильное форматирование для цели "app"
app: main.o coursework.o
    $(CC) $(CFLAGS) -o app main.o coursework.o

# Правильное форматирование для цели "test"
test: test.o coursework.o
    $(CC) $(CFLAGS) -o test test.o coursework.o

# Правильное форматирование для цели "clean"
clean:
    rm -f *.o app test
# Содержимое файла makefile

CC = gcc
CFLAGS = -Wall -Wextra

# Правильное форматирование для цели "app"
app: main.o coursework.o
    $(CC) $(CFLAGS) -o app main.o coursework.o

# Правильное форматирование для цели "test"
test: test.o coursework.o
    $(CC) $(CFLAGS) -o test test.o coursework.o

# Правильное форматирование для цели "clean"
clean:
    rm -f *.o app test
