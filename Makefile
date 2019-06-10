SRC_DIR=src
EXE=vulcan
LIBS=-lhiredis -lpthread
OBJS=$(wildcard $(SRC_DIR)/*.c)

all:
	gcc $(OBJS) $(LIBS) -o $(EXE)

clean:
	rm $(EXE)
