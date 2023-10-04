# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = exo_3.o jeu.o 
exo_3: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o exo_3

jeu.o: jeu.c jeu.h
exo_3.o : exo_3.c jeu.h


clean :
		rm -f $(OBJ) exo_3