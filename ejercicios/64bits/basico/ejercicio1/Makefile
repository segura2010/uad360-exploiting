BUILD=gcc
FLAGS=-no-pie -fno-stack-protector

default: clean main

main:
	$(BUILD) main.c -o main $(FLAGS)

clean:
	rm -f main *.o