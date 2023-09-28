CC = gcc
CFLAGS = -Wall -02
SRC = menu.c abs_max.c abs_min.c diff.c sum.c
OBJ = $(SRC:.c=.o)
OUT = menu.o

all: $(OUT)
	$(CC) $(CFLAGS) -o $@ $(OBJ)


%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OUT) $(OBJ)
