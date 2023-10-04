# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = exo_4.o jeu.o 
exo_3: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o exo_4

jeu.o: jeu.c jeu.h
exo_4.o : exo_4.c jeu.h


clean :
		rm -f $(OBJ) exo_4