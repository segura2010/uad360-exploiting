BUILD=gcc
FLAGS=-no-pie -fno-stack-protector -z execstack -m32

default: clean main

main:
	$(BUILD) main.c -o main $(FLAGS)

clean:
	rm -f main *.o