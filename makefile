app: coursework.o main.o
$(CC) $(LDFLAGS) -o app coursework.o main.o

coursework.o: coursework.c coursework.h
$(CC) $(CFLAGS) -c coursework.c

main.o: main.c coursework.h
$(CC) $(CFLAGS) -c main.c

test: coursework.o test.o
$(CC) $(LDFLAGS) -o test coursework.o test.o

test.o: test.c coursework.h test.h
$(CC) $(CFLAGS) -c test.c
