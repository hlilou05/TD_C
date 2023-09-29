# Makefile
CC = gcc
CFLAGS = -g -W -Wall -std=c99
LDFLAGS =
OBJ = exo_1.o common.o show.o
spin_app: $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o spin_app

common.o: common.c common.h
exo_1.o : exo_1.c common.h
show.o : show.c show.h


clean :
		rm -f $(OBJ) spin_app