SHELL := /bin/sh
CC    := gcc

OUTFILE := bin/out

SRC := src
OBJ := obj
INC := include

SOURCES := $(wildcard $(SRC)/*.c)
OBJECTS := $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SOURCES))

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) -c -I$(INC) -o $@ $<

.PHONY: build run clean

build: $(OBJECTS)
	$(CC) $^ -o $(OUTFILE)

run:
	$(OUTFILE)

clean:
	rm -f $(OBJ)/**

