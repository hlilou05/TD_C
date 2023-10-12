# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = exo_5.o jeu.o 
exo_3: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o exo_5

jeu.o: jeu.c jeu.h
exo_5.o : exo_5.c jeu.h


clean :
		rm -f $(OBJ) exo_5