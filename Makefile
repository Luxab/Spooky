CC = g++

all:
	$(CC) 'spooky2.cpp' -lpthread -g -o runme 

clean:
	rm -f a
