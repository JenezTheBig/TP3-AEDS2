CC = gcc
CFLAGS = -Wall -Wextra

all: morse_translation

morse_translation: main.o morse.o
	$(CC) $(CFLAGS) -o morse_translation main.o morse.o

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

morse.o: morse.c morse.h
	$(CC) $(CFLAGS) -c morse.c

clean:
	rm -f morse_translation *.o
