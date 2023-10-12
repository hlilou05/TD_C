# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = exo3.o vehicule.o pile.o
exo1: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o exo3

vehicule.o: vehicule.c vehicule.h 
pile.o: pile.c pile.h 
exo3.o : exo3.c vehicule.h pile.h


clean :
		rm -f $(OBJ) exo3