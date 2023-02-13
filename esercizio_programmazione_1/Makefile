CC=gcc
CFLAGS=-std=gnu99

all: list_normalize capitalize

list_normalize: FORCE
	rm -rf *~ list_normalize
	$(CC) -o list_normalize list_normalize.c list_normalize_main.obj $(CFLAGS)

capitalize: FORCE
	rm -rf *~ capitalize
	$(CC) -o capitalize capitalize.c capitalize_main.obj $(CFLAGS)

clean:
	rm -rf *~ list_normalize capitalize

FORCE: