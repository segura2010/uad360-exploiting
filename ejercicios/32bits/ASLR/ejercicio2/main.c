#include <stdint.h>

void help(){
    asm volatile(
        "jmp %esp"
    );
}

void do_nothing(){
    char input[120];
    printf("Do? ");
    gets(input);
    printf("Nothing...\n");
}

int main(int argc, char** argv) {
    do_nothing();
    return 0;
}