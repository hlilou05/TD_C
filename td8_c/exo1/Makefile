# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = exo1.o vehicule.o 
exo1: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o exo1

vehicule.o: vehicule.c vehicule.h
exo1.o : exo1.c vehicule.h


clean :
		rm -f $(OBJ) exo1