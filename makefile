CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS =

# Первая задача: сборка приложения для простого использования
app: coursework.o main.o
	$(CC) $(LDFLAGS) -o app coursework.o main.o

coursework.o: coursework.c coursework.h
	$(CC) $(CFLAGS) -c coursework.c

main.o: main.c coursework.h
	$(CC) $(CFLAGS) -c main.c

# Вторая задача: запуск тестов
test: coursework.o test.o
	$(CC) $(LDFLAGS) -o test coursework.o test.o

test.o: test.c coursework.h test.h
	$(CC) $(CFLAGS) -c test.c

# Общие зависимости
coursework.o: coursework.h
main.o: coursework.h
test.o: coursework.h test.h

clean:
	rm -f app test *.o
