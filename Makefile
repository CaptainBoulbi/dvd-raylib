all:
	gcc -Wall -Wextra -O3 -W -o mineur main.c -lraylib

run: all
	./mineur
