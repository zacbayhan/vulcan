all:
	gcc vulcan.c -lhiredis -lpthread -o vulcan

clean:
	rm vulcan
