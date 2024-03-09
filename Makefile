all:
	gcc -Wall -Wextra -O3 -W -o dvd main.c -lraylib

run: all
	./dvd
